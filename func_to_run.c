#include "shell.h"

/**
 * run_func - execute function
 * @args: list of arguments
 * @env: environment variables
 * @flg: flag indicating error
 *
 * Return: 0
 */
int run_func(char **args, char **env, int *flg)
{
	if ((_strcmp(args[0], "env")) == 0)
		print_env(args[0], env);
	if ((_strcmp(args[0], "cd")) == 0)
		simple_cd(args, flg);
	if ((_strcmp(args[0], "exit")) == 0)
		simple_exit(args);

	return (0);
}
/**
 * simple_exit - cause a termination of simple shell
 * @args: list of user input arguments
 *
 * Return: On successful execution 0, on failure a status value
 */
int simple_exit(char **args)
{
	_free(args);
	exit(1);
	return (0);
}
/**
 * simple_cd - change directory.
 * @args: arguments
 * @flg: state error flag
 * Return: Always returns 1, to continue executing.
 */
int simple_cd(char **args, int *flg)
{
	if ((_strcmp(args[0], "cd")) == 0)
	{
		*flg = 1;
		if (args[1] == NULL)
		{
			fprintf(stderr, "lsh: expected argument to \"cd\"");
			write(STDOUT_FILENO, "\n$ ", 3);
		}
		else
		{
			if (chdir(args[1]) != 0)
			{
				perror("lsh");
			}
			write(STDOUT_FILENO, "$ ", 2);
		}
	}
	return (1);
}
