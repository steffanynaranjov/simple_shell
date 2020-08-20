#include "shell.h"
/**
* cdir - checks if dir
* @argv: argv
* @av: argv
* @cont: error counter
* description: check if is a directory
*
* Return: 0 or 1
*/
int cdir(char **argv, char **av, int *cont)
{
	DIR *dir;

	dir = opendir(av[0]);
	if (dir)
	{
		print_errors(argv[0], *cont, av[0]);
		*cont = *cont + 1;
		_free(av);
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
			closedir(dir); /* a sistem call to close dir */
			return (1);
		}
		else
		{
			closedir(dir);
			return (-1);
		}
		closedir(dir);
	}
	return (0);
}
