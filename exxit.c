#include "shell.h"
/**
* exxit - handle exit command
* @av: string
* Description: out of the shell with exit
* Return: 1 0r 0
*/
int exxit(char *av)
{
	int status;

	status = _strcmp(av, "exit");

	if (status == 0)
	{
		free(av);
		exit(1);
	}
	return (1);
}
