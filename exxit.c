#include "shell.h"
/**
* exxit - handle exit command
* @av: double char pointer
* Description: out of the shell with exit
* Return: 1 0r 0
*/
int exxit(char **av)
{
	_free(av);
	exit(1);
	return (1);
}
