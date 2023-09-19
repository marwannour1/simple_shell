#include "main.h"

/**
  * main - Entry point
  *
  * Return: always 0 on success and 1 on failure
  */
int main(int argc, char **argv, char **env)
{
	char *buffer = NULL;
	char **arrayOfStrings;
	char **temp;

	(void)argv;
	(void)argc;
	prompt();
	getUserInput(&buffer);
	printf("%s", buffer);
	arrayOfStrings = tokenisation(buffer, " ");
	temp = arrayOfStrings;
	while (*temp)
	{
		printf("%s\n", *temp);
		temp++;
	}

	execve(arrayOfStrings[0], arrayOfStrings, env);
		
	free(buffer);
	return (0);
}
