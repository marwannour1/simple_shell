#include "main.h"

/**
 *getUserInput - read a line from stdin
 *
 *Return: pointer that points to a str with the input content
 */
char *getUserInput(void)
{
	char *input = NULL;
	size_t bufsize = 0;

	if (getline(&input, &bufsize, stdin) == -1) /*if getinput fails */
	{
		if (feof(stdin)) /*test for the eof */
		{
			free(input); /*avoid memory leaks when ctrl + d */
			exit(EXIT_SUCCESS); /*we recieved an eof */
		}
		else
		{
			free(input); /*avoid memory leaks when getinput fails */
			perror("error while reading the input from stdin");
			exit(EXIT_FAILURE);
		}
	}

	return (input);
}
