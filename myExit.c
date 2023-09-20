#include "main.h"

/**
 * myExit - exit to end
 * @args: command array
 *
 * Return: 0 if failure 1 if success
 */
void myExit(char **args)
{
	if (args[1] != NULL)
		exit(atoi(args[1]));
	else
		exit(1);
}
