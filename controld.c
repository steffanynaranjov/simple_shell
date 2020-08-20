#include "shell.h"
/**
* controls - Avoid exit with Ctrl C
* @sig: Signal number
*
* Description: Avoid exit with Ctrl C
* Return: Nothing
*/
void controls(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}
