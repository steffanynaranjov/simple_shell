#include "shell.h"
/**
* Upath - Find path
* @av: Double pointer to free
* @env: Environment
* @arv: Command
* @x_av: Integer lenght command
* @pfid: Integer pointer
*
* Description: Find path
* Return: Nothing
*/
void Upath(char **av, char *env, char *arv, int x_av, int *pfid)
{
	int x = 0, start, c_path = 0;
	char *s = "PATH", *exe, **path;

	for (x = 0; env[x] == s[x] && env[x] != '='; x++)
		;
	if (x == 4)
		*pfid = 1;
	start = ++x;
	if (*pfid)
	{
		for (; env[x]; x++)
		{
			if (env[x] == ':')
				c_path++;
		}
		path = malloc(sizeof(char *) * (c_path + 2));
		exe = path[fndp(c_path, &env[start], arv, x_av, start, path)];
		if (!exe)
		{
			_free(path);
			return;
		}
		x = _strlen(exe);
		free(av[0]);
		av[0] = malloc(sizeof(char) * (x + 1));
		x = 0;
		while (exe[x])
			av[0][x] = exe[x], x++;
		av[0][x] = '\0';
		x = 0;
		while (path[x] != NULL)
			free(path[x++]);
		free(path);
	}
}
