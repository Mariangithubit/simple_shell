#include "shell.h"

/**
 * _eputs - print Input STR
 * @str: STR Which will be printed
 *
 * Return: NOTHING
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - WRITE CHAR c to stderr
 * @c: CHAR to BE printed
 *
 * Return: if success return 1
 * IF error return -1.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd – WRITE CHAR c given fd
 * @c: CHAR to BE printed
 * @fd: filedescriptor which will write into
 *
 * Return: return 1 if true.
 * IF not, return -1.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - Print an input STR
 * @str: THE STR which will printe
 * @fd: filedescriptor which will write into
 *
 * Return: NUM of CHARs
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

