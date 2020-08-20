#include "shell.h"
/**
* exxit - handle exit command
* @av: string
* @num: num
* Description: out of the shell with exit
* Return: 1 0r 0
*/
int exxit(char *av, int num)
{
	int status;

	status = _strcmp(av, "exit");

	if (status == 0)
	{
		free(av);
		if (num == 512) /*exit 2 */
			exit(2);
		else
			exit(num);
	}
	return (1);
}
