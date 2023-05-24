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
        return (add_node_end(&func->alias), str, 0) == NULL);
}

/**
 * unset_alias - delete alias
 * @func: function of args
 * @str: string
 * Return: 0 on success, 1 if fail
 */
int unset_alias(func_t *func)
{
        int i;
        char *c, n;

        c = strchr(str, "=");
        if (c)
                return (1);
        n = *c;
        *c = 0;
        i = delet_node(&(func->alias), get_node(func->alias, start_node(func->alias, str, -1)));
        *c = n;
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
