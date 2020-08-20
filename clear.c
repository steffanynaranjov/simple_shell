#include "shell.h"
/**
* _free - Free a double pointer
* @s: pointer to free
*
* Description: Free a double pointer
* Return: Nothing
*/
void _free(char **s)
{
	int x = 0;

	while (s[x])
		free(s[x++]);
	free(s);
}
