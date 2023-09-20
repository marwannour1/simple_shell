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

	(void)argv;
	(void)argc;
	prompt();
	getUserInput(&buffer);
	
	arrayOfStrings = tokenisation(buffer, " ");
	arrayOfStrings = new_tokenisation(arrayOfStrings);

	_excute(arrayOfStrings, env);
	
		
	free(buffer);
	return (0);
}
