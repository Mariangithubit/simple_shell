#include "shell.h"

/**
 * _memset - gives memory a constant byte of data.
 * @s: the memory area's pointer
 * @b: the byte that *s should contain.
 * @n: the number of bytes that must be filled
 * Return: (s) a reference to the memory location s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a group of STRs
 * @pp: a group of STRs
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a memory block
 * @ptr: referee to a previously malloc'd block
 * @old_size: Byte size of the preceding block
 * @new_size: New block's byte size
 * Return: referee to the old block names.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
