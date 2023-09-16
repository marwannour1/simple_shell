#include "main.h"

/**
  * new_tokenisation - alters the tokenised string
  * @str: array of string from tokeniser
  *
  * Return: the new array of strings
  */
char **new_tokenisation(char **str)
{
	char **args = str;
	char *prefix = "/bin/";
	unsigned int len_str = strlen(*args);
	unsigned int len_prefix = strlen(prefix);
	char *result = malloc(len_prefix + len_str + 1);

        if (!result)
		return (0);
	if ((strstr(args[0], "/bin/")) != NULL)
	{
        strcpy(result, prefix);
        strcat(result, *args);
        args[0] = result;
	}
	free(result);

	return (args);
}
