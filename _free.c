#include "main.h"

/**
 * _free - free array of tokens
 * @array_tokens: tokenized string
 * @input: string
 *
 * Return: void
 */
void _free(char **array_tokens)
{
	int index;

	for (index = 0; array_tokens[index]; index++)
		free(array_tokens[index]);
	free(array_tokens);
}

