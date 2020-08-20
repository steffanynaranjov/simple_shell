#include "shell.h"
/**
* print_number - Print an integer
* @n: Parameter input
*
* Description: Print the num error
* Return: Nothing
*/
void print_number(int n)
{
	unsigned int num = n;
	char x;

	if (num / 10 != 0)
		print_number(num / 10);
	x = ((num % 10) + '0');
	write(STDERR_FILENO, &x, 1);
}
