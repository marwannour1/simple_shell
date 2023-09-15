#include "main.h"

/**
 * _env - Prints the environment variables.
 *
 * Return: void.
 */
int _env()
{
	int i;

	for (i = 0; __environ[i]; i++)
	{
		puts(__environ[i]);
		putchar('\n');
	}

	return (0);
}

