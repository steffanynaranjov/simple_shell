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
	int status;

	status = _strcmp(av, "env");

	if (status == 0)

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

/**
* find_env - find env
* @av: env to find
* @env: all environment variables for the user
*
* Description: prints environment finded
* Return: 1
*/
int find_env(char *av, char **env)
{
	int i, x, len;
	char *temp, *temp2, *token;

	x = 0;
	len = _strlen(av);

	while (env[x])
	{
		temp = env[x];
		for (i = 0; temp[i] == av[i]; i++)
			;
		if (i == len)
		{
			printf("Encontramos Home temp = %s\n", temp);
			token = strtok(env[x], "=");
			while (token != NULL)
			{
				temp2 = token;
				token = strtok(NULL, "=");
			}
			printf("FInalmente token = %s\n", temp2);
			break;
		}
		++x;
	}
	return (1);
}
