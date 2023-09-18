#include "main.h"

/**
  * main - Entry point
  *
  * Return: always 0 on success and 1 on failure
  */
int main(void)
{
	char *buffer = NULL;
	char **arrayOfStrings;

	getUserInput(&buffer);
	arrayOfStrings = tokenisation(buffer, " ");

	while (*arrayOfStrings)
	{
		printf("token: %s\n", *arrayOfStrings);
		arrayOfStrings++;
	}
		
	free(buffer);
	return (0);
}
