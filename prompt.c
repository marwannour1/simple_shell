#include "main.h"

/**
 * prompt - Check if the program is in the interactive mode, then shows $
 * Return: -1 on failure greater than 0 on success
 */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", strlen("$ "));
}

