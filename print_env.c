#include "shell.h"
/**
* print_env - environment variables
* @av: command to recibe
* @env: all environment variables for the user
*
* Description: prints all environment variables
* Return: 1
*/
int print_env(char *av, char **env)
{
	unsigned int x = 0, length;
	char *s = "env";

	for (; av[i] > 96 && av[i] < 123 && av[i] == s[i]; i++)
		;
	if (i == 3)
	{
		x = 0;
		while (env[x])
		{
			length = _strlen(env[x]);
			write(STDOUT_FILENO, env[x], length);
			write(STDOUT_FILENO, "\n", 1);
			++x;
		}
	}
	return (1);
}
