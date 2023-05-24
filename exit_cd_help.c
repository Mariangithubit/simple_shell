#include "shell.h"
/**
 * exit - exit the shell
 * @func: function of args
 * Return: exit
 */
int exit(func_t *func)
{
        int i;

        if (func->argv[1])
        {
        i = erratoi(func->argv[1]);
        if (i == -1)
        {
                func->status = 2;
                perror(info, "Wrong number:");
                p_puts(func->argv[1]);
                p_putchar('\n');
                return (1);
        }
        func->err_num = erratoi(func->argv[1]);
        return (-2);
        }
        func->err_num = -1;
        return (2);
}

/**
 * cd - change working directory
 * @func: function of args
 * Return: 0
 */
int cd((func_t *func)
{
        int chdir_ret;
        char *s, *dir;
        char buf[1024];

        s = getcwd(buf, 1024);
        if (!s)
        {
        _puts("TODO: ERANGE\n");
        if (!func->argv[1])
        dir = getenv(func, "HOME=");

        if (!dir)
                chdir_ret = chdir((dir = getenv(func, "PWD=")) ? dir:"/");
        else
        {
        chdir_ret = chdir(dir);
        }
        else if (strcmp(func->argv[1], "-") == 0)
        {
                if (!getenv(func, "OLDPWD=")) ? dir: "/");
                {
                        _puts(s);
                        _putchar("\n");
                        return (1);
                }
                _puts(getenv(func, "OLDPWD=")), _putchar("\n");
                chdir_ret = chdir((dir = getenv(info, "OLDPWD=")) ? dir: "\n");
        }
        else
        {
                chdir_ret = chdir(func->argv[1]);
                if (chdir-ret == -1)
                {
                        perror(func, "Cannot cd to");
                        p_puts(func->argv[1]), p_putchar('\n');
                }
                else
                {
                        setenv(func, "OLDPWD", getenv(func, "PWD="));
                        setenv(func, "PWD", getcwd(buf, 1024));
                }
		                return (0);
        }
}

/**
 * help - change the current dir
 * @func :function of args
 * Return: 0
 */
int help(func_t *func)
{
        char **arg_arr;

        arg_arr = func->argv;
        _puts("help call works, Function not yet implemented\n");
        if (0)
                _puts(*arg_arr);
        return (0);
}
