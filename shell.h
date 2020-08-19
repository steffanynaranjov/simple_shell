#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include<string.h>
#include <fcntl.h>
#include <dirent.h>

/**
 * struct args - arguments
 * @argc: numbers of argv
 * @argv: double pointer of strings
 *
 * Description: struct arguments
 */
typedef struct args
{
	int argc;
	char **argv;
} args_t;
/**
 * struct run_f - Strucrun in
 * @fc: name function
 * @f: function direction
 */
typedef struct run_f
{
	char *fc;
	int (*f)(char **argv);
} run_t;

int main(int argc, char **argv, char **env);
int exec(char **args);
char *gline(void);
void handle_sigint(int n);
void free_memory(char **list, int t);
<<<<<<< HEAD
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _print_env(char *av, char **env);
int _exitt(char *av, int num);
void _print_error(int status, char *s);
=======

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);

int _print_env(char *av, char **env);
int _exitt(char *av, int num);

void _print_error(int status, char *s);

>>>>>>> 8e3b5083d05563d4fcfca32279ffff34fd1852c0
args_t split_line(char *line);

#endif /* SHELL_H */
