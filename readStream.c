#include "main.h"

/**
 *readStream - read a line from the stream
 *
 *Return: pointer that points the the read line
 */
char *readStream(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t inputLen;

	inputLen = getline(&line, &bufsize, stdin);

	if (inputLen == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	if (inputLen > 0 && line[inputLen - 1] == '\n')
	{
		line[inputLen - 1] = '\0';
	}

	return (line);
}
