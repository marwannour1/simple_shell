#include "main.h"

/**
 * _exit - exit to end
 * @args: command array
 *
 * Return: 0 if failure 1 if success
 */
int _exit(char **args)
{
	if (args[1] != NULL)
		exit(atoi(args[1]));
	else
		exit(EXIT_CODE);
}

