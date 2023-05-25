#include "shell.h"

/**
 * set_alias - set alias to a string
 * @func: function of args
 * @str: string
 * Return: 0 on succes, 1 if fail
 */
int set_alias(func_t *func, char *str)
{
	char *c;

	c = strchr(str, '=');
	if (!c)
		return (1);
	if (!*++c)
		return (unset_alias(func, str));

	unset_alias(func, str);
	return ((add_node_end(&func->alias), str, 0) == NULL);
}

/**
 * unset_alias - delete alias
 * @func: function of args
 * @str: string
 * Return: 0 on success, 1 if fail
 */
int unset_alias(func_t *func)
{
<<<<<<< HEAD
	int i
		char *c, n;
=======
        int i;
        char *c, n;
>>>>>>> 4f0fecd60d109c6104c9dd021b28a49da6ab3c9e

	c = strchr(str, "=");
	if (c)
		return (1);
	n = *c;
	*c = 0;
	i = delet_node(&(func->alias), get_node(func->alias,
				start_node(func->alias, str, -1)))
		* c = n;
	return (i);
}

/**
 * p_alias - print alias
 * @node: the node of alias
 * Return: 0 on success, or 1 if fail
 */
int p_alias(list_t *node)
{
	char *c = NULL;
	char *n = NULL;

	if (node)
	{
		c = strchr(node->str, '=');
		for (n = node->str; n <= c; n++)
		_putchar(*n);
		_putchar('\');
		_puts(c + 1);
		_puts("\n");
		return (0);
	}
	return (1);
}
<<<<<<< HEAD


/**
* alais - built alias
* @func: function args
* Return: 0
*/
int alias(func_t *func)
{
	int i = 0;
	char *c = NULL;
	list_t *node = NULL;
	if (func->argc == 1)
	{
		node = func->alias;
		while (node)
		{
			p_alias(node);
			node = node->next;
		}
			return (0)
	}
	for (i = 1; func->argv[i]; i+)
	{
		c = strchar(func->argv[i], ' = ');
		if (c)
			set_alias(func, func->argv[i]);
		else
		{
			p_alias(start_node(func->alias, func->argv[i], ' = '));
		}
	}
	return (0);
}
=======
>>>>>>> 4f0fecd60d109c6104c9dd021b28a49da6ab3c9e
