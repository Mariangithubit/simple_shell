#include "shell.h"

/**
 * env - prints the current environment
 * @func: function of args
 * Return: 0
 */
int env(func_t *func)
{
	p_list_str(func->env);
	return (0);
}

/**
 * getenv - get the value of env
 * @func: function of args
 * @name: name of env
 * Return: NULL
 */
char *getenv(func_t *func, const char *name)
{
	char *c;
	list-t *node = func->env;

	while (node)
	{
		c = start_with(node->str, name);
		if (c && *c)
			return (c);
		node = node->next;
	}
	return (NULL);
}

/**
 * setenv - Initialize a new environment variable, or modify an existing one
 * @func: function of args
 * Return: 0
 */
int setenv(func_t *func)
{
	if (func->argc != 3)
	{
		p_puts("Wrong number\n");
		return (1);
	}
	if (setenv(func, func->argv[1], func->argv[2]))
		return (0);
	return (1);
}

/**
 * unsetenv - Remove an environment variable
 * @func: function of args
 * Return: 0
 */
int unsetenv(func_t *func)
{
	int i;

        if (func->argc == 1)
        {
                p_puts("Wrong number\n");
                return (1);
        }
	for (i = 1; i<= func->argc; i++)
		unsetenv(func, func->argv[i]);
	return (0);
}

/**
 * env_list - env linked list
 * @func: function of args
 * Return: 0
 */
int env_list(func_t *func)
{
	size_t n;
	list_t *node = NULL;

	for (n = 0; environ[i]; i++)
	{
		add_node-end(&node, environ[i], 0);
		func->env = node;
	}
	return (0);
}
