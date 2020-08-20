#include "shell.h"
/**
* fndp - find PATH
* @xpath: integer
* @env: environment
* @arv: Command
* @x_av: integer lenght command
* @start: integer start
* @path: Double pointer path
*
* Description: find the path
* Return: a integer
*/
int fndp(int xpath, char *env, char *arv, int x_av, int start, char **path)
{
	int x = 0, st = 0, l_p = 0, j = 0, i = 0;

	while (x <= xpath)
	{
		st = start;
		for (; env[start] && env[start] != ':'; start++, l_p++)
			;
		path[x] = malloc(sizeof(char) * (l_p + x_av + 2));
		for (l_p = 0; env[st] && env[st] != ':'; st++)
			path[x][l_p++] = env[st];
		path[x][l_p++] = '/';
		for (i = 0; arv[i]; i++)
			path[x][l_p++] = arv[i];
		path[x][l_p++] = '\0';
		start++, j++, x++;
	}
	path[x] = NULL;
	x = 0;
	while (path[x] != NULL && access(path[x], X_OK) != 0)
		x++;
	return (x);
}
