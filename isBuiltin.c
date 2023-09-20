#include "main.h"

/**
 * isBuiltin - checks if the command is a builtin function
 * @args: the array
 * Return: 1 if command, 0 otherwise
 */
int isBuiltin(char **args)
{
	if (!args[0])
		return (0);
	if (!strcmp(args[0], "exit"))
		myExit(args);
	else if (!strcmp(args[0], "env"))
		_env();
	else
		return (0);
	return (1);
}

