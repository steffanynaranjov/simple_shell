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

ssize_t getline_pr(char **argv, int *flag, char **env);
int exece(char **av, int *num);
int main(int argc, char **argv, char **env);
void controls(int sig);
int simple_exit(char **args);
int simple_cd(char **args, int *flg);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void fill(char *str, char *p);
char **_strtok(char *str);
void _free(char **s);
void print_number(int n);
void print_errors(char *argv0, int cont, char *av0);
int print_env(char *av, char **env);
void getav(int *x_av, char **av, char *arv);
int fndp(int xpath, char *env, char *arv, int x_av, int start, char **path);
void Upath(char **av, char *env, char *arv, int x_av, int *pfid);
char *path_(char **av, int *pfid, char **env, int *cont, int *flag_1, int *n);
int cdir(char **argv, char **av, int *cont);


#endif /* SHELL_H */
