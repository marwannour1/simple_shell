#include "main.h"

/**
 *nonInteractiveMode - unix command line interpreter
 *
 *Return: void
 */
void nonInteractiveMode(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		line = readStream();
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
