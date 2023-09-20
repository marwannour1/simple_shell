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

	if(isatty(STDIN_FILENO))
	{
	(void)argv;
	(void)argc;
	while (1)
	{
	prompt();
	getUserInput(&buffer);
	
	arrayOfStrings = tokenisation(buffer, " ");
	arrayOfStrings = new_tokenisation(arrayOfStrings);

	_excute(arrayOfStrings, env);
	}
	free(buffer);
	}
	else
	{
		(void)argc;

		argv++;
		arrayOfStrings = new_tokenisation(argv);
		_excute(arrayOfStrings, env);

	}
	free_memory(arrayOfStrings);

	return (0);
}
