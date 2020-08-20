#include "shell.h"
/**
 * print_errors - Print errors
 * @argv0: name of shell
 * @cont: number of the error
 * @av0: argument passed
 *
 * Description: Print error
 * Return: nothing
 */
void print_errors(char *argv0, int cont, char *av0)
{
	int length;

	length = _strlen(argv0);
	write(STDERR_FILENO, argv0, length);
	write(STDERR_FILENO, ": ", 2);
	print_number(cont); /* Number of the error */
	write(STDERR_FILENO, ": ", 2);
	length = _strlen(av0);
	write(STDERR_FILENO, av0, length);
	write(STDERR_FILENO, ": not found\n", 12); /*max 12 let */
}
