#include "shell.h"

/**
 * bfree - NULL the address AND frees a pointer
 * @ptr: address of the free pointer
 * Return: if freed return 1 | 0 if not.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
