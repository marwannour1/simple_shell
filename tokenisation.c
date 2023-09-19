#include "main.h"
/**
* tokenisation - split the input into strings
 * @str: the string to be tokenized.
 * @delimiter: the delimiter used to split the string.
 * * Return: an array of pointers(Strings)
 */
 char **tokenisation(char *str, char *delimiter)
 {
     char *token = NULL;
     char **arrayOfStrings = NULL;
     int i = 0;

     token = strtok(str, delimiter);
     while (token)
     {
		arrayOfStrings = realloc(arrayOfStrings, sizeof(char *) * (i + 1));
		if (arrayOfStrings == NULL)
			return (NULL);

		arrayOfStrings[i] = malloc(strlen(token) + 1);
		if (!(arrayOfStrings[i]))
			return (NULL);

		strcpy(arrayOfStrings[i], token);
		token = strtok(NULL, delimiter);
		i++;
     }
	/*increase the size of the array*/
	arrayOfStrings = realloc(arrayOfStrings, (i + 1) * sizeof(char *));
	if (!arrayOfStrings)
		return (NULL);
	arrayOfStrings[i] = NULL;
	return (arrayOfStrings);
}
