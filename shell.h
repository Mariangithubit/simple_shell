#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <errno.h>
#include <fcntl.h>

/*for read and write buffer*/
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/*for convert numbers*/
#define CONVERT_LOWERCASE
#define CONVERT_UNSIGNED

/*for using sys getline*/
#define USE_GETLINE
#define USE_STRTOK

/*path.c*/
/**
 * struct information - contains many argumants and functions
 * @arg: arguments
 * @argv: argument vector
 * @argc: the count of argument
 * @path: the pathn od string
 * @linecount: the count of lines
 * @countline_flag: the input of count line
 * @status: the return status
 * @err_num: error number
 * @alias: alias node
 * @env: environment linked list
 */
typedef struct information
{
        char *arg;
        char **argv;
        int argc;
        char *path;
        unsigned int linecount;
        int countline_flag;
        int status;
	int err_num;
	list_t *alias;
	list_t *env;

}func_t;

/**
 * strlist - linked string.
 * @num: the number
 * @str: the string
 * @next: points to the next node
 */
typedef struct strlist
{
	int num;
	char *str;
	struct strlist *next;
}list_t;

/*active.c*/
int active(func_t *func);
int delimiter(char c, char *delim);
int alpha(int c);
int atoi(char *s);

/*exit_cd_help.c*/
int exit(func_t *func);
int cd((func_t *func);
int help(func_t *func);

/*alias.c*/
int set_alias(func_t *func, char *str);
int unset_alias(func_t *func);
int alias(func_t *func);
int p_alias(list_t *node);

/*environ.c*/
int env(func_t *func);
char *getenv(func_t *func, const char *name);
int setenv(func_t *func);
int unsetenv(func_t *func);
int env_list(func_t *func);

/*p_putchar.c*/
void p_puts(char *str);
int p_putchar(char c);
#endif
