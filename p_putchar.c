#include "shell.h"

/**
 * _puts - input string
 * @str: string
 * Retun: 0
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - print the string
 * @c: char
 * Return: 0
 */
int _putchar(char c)
{
        static int i;
        static char buf[WRITE_BUF_SIZE];

        if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
        {
                write(1, buf, i);
                i = 0;
        }
        if (c != BUF-FlUSH)
                buf[i++] = c;
        return (1);
}

/**
 * p_puts - print input string
 * @str: string
 * Return: 0
 */
void p_puts(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		p_putchar(str[i]);
		i++;
	}
}

/**
 * p_putchar - print char
 * @c: char
 * Return: 0
 */
int p_putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF-FlUSH)
		buf[i++] = c;
	return (1);
}
