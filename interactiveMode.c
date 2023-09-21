#include "main.h"

/**
 *interactiveMode - UNIX command line interpreter
 *
 *Return: void
 */
void interactiveMode(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		printf("($) ");
		line = getUserInput();
		args = lineParser(line);
		status = executeProgram(args);
		free(line);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}
