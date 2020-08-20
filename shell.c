#include "shell.h"
/**
* main - all the inputs for the command
* @argc: count integer
* @argv: double char pointer
* @env: double char pointer
*
* Description: recibe the input commands
* Return: 0
*/
int main(int argc, char **argv, char **env)
{
	int flag = 1;
	int *p = &flag;

	(void) argc;
	signal(SIGINT, controls);
	if (getline_pr(argv, p, env) == -1)

	{
		if (flag == 0)
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	return (0);
}
