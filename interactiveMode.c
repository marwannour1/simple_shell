#include "main.h"

/**
 *shell_interactive - UNIX command line interpreter
 *
 *Return: void
 */
void shell_interactive(void)
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
