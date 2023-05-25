#include "shell.h"

/**
 * _strlen - returns a string's length
 * @s: checking the length of the string
 * Return: return string's integer length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares the lexical patterns of two different strings.
 * @s1: the 1st str
 * @s2: the 2nd str
 * Return: return Zero if s1 == s2, positive if s1 > s2,
 * and negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - sees whether the haystack comes before the needle.
 * @haystack: searching a string
 * @needle: the necessary substring
 * Return: return the address of the next haystack character, or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat – concatenate 2 strings together
 * @dest: the buffer of the destination
 * @src: the buffer of the source
 * Return: referee to the buffer of the destination
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
