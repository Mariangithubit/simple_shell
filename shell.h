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
#define BUF_FLUSH-1

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
}func_t;
