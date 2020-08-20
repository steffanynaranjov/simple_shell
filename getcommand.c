#include "shell.h"
/**
* getav - Get command
* @x_av: Lenght pointer
* @av: Double pointer
* @arv: Command
*
* Description: get the command to the path
* Return: Nothing
*/
void getav(int *x_av, char **av, char *arv)
{
	int x = 0;

	x = 0;
	while (av[0][x])
		arv[x] = av[0][x], x++;
	arv[x] = '\0';
	*x_av = x;
}
