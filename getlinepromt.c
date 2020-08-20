#include "shell.h"
/**
* getline_pr - promt and getline
* @argv: double char pointer
* @flag: interactive mode
* @env: environment
*
* Description: Works as a promt and getline
* Return: 1 or -1
*/
ssize_t getline_pr(char **argv, int *flag, char **env)
{
	int cont = 1, flg = 0, pfnd = 0, num = 0;
	char *buff = NULL, **av, *arv;
	size_t sbuff = 1;
	ssize_t lenght;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2), *flag = 0;
	while ((lenght = getline(&buff, &sbuff, stdin)) != -1)
	{
		pfnd = 0, flg = 0;
		if (lenght == EOF)
		{
			free(buff);
			return (-1);
		}
		av = _strtok(buff);
		if (!av)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "$ ", 2);
			continue;
		}
		print_env(av[0], env);
		exxit(av[0]);
		if (access(av[0], X_OK) == 0 && !opendir(av[0]))
			exece(av, &num), cont++;
		else if (av && env != NULL)
			arv = path_(av, &pfnd, env, &cont, &flg, &num);
		if (flg == 0 && pfnd)
		{
			print_errors(argv[0], cont, av[0]), cont++;
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "$ ", 2), free(arv), _free(av);
			else
				free(buff), free(arv), _free(av), exit(127);
		}
	}
	free(buff);
	return (-1);
}
