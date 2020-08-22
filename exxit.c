#include "shell.h"
/**
* exxit - handle exit command
* @av: string
* @args: double char pointer
* @env: Environment
* Description: out of the shell with exit
* Return: 1 0r 0
*/
int exxit(char *av, char **args, char **env)
{
	int status;

	status = _strcmp(av, "exit");

	if (status == 0)
	{
		free(av);
		free(args);
		free(env);
		exit(1);
	}
	return (1);
}
