#include "main.h"

/**
  * free_memory - frees dynamically allocated memory
  * @arrayOfStrings: arrayOfStrings to be freed
  * Return: -1 if couldn't free, 0 if free
  */
int free_memory(char **arrayOfStrings)
{
	if (arrayOfStrings == NULL)
		return (0);
	while(*arrayOfStrings)
	{
		free(*arrayOfStrings);
		arrayOfStrings++;
	}
	free(arrayOfStrings);
	return(0);
}
