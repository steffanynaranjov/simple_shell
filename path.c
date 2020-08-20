#include "shell.h"
/**
* path_ - handle the path
* @av: double pointer
* @pfid: find the path
* @env: environment
* @cont: counter
* @flag_1: flag
* @num: number
* Return: a pointer
*/
char *path_(char **av, int *pfid, char **env, int *cont, int *flag_1, int *num)
{
	int x = 0, x_av, y;
	char *arv;

	x = _strlen(av[0]), arv = malloc(sizeof(char) * (x + 1));
	getav(&x_av, av, arv);
	for (y = 0; env[y] && access(av[0], X_OK) != 0 && *pfid == 0; y++)
		Upath(av, env[y], arv, x_av, pfid);
	if (access(av[0], X_OK) == 0)
		exece(av, num), cont++, *flag_1 = 1, free(arv);
	return (arv);
}
