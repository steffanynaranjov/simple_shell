#include "shell.h"
/**
* exece - fuction to execute
* @av: Double char pointer
* @num: pointer num
* Description: execute argument
* Return: 1 or -1
*/
int exece(char **av, int *num)
{
	pid_t pid = 0;

	pid = fork();
	if (pid == -1)
	{
		perror("Error:"); /* if cannot execute print error */
		return (-1);
	}
	if (pid == 0)
	{
		execve(av[0], av, NULL);
	}
	else
	{
		wait(num);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
	}
	_free(av);
	return (1);
}
