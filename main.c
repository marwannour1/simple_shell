#include "main.h"

/**
  * main - Entry point
  *
  * Return: always 0 on success and 1 on failure
  */
int main(void)
{
	char *input = NULL;
	size_t buffer_size;
	char **command_tokenized;
	int ret;

	while (true)
	{
		getUserInput(&input, &buffer_size, 1);
		command_tokenized = tokenisation(input, " ");
		command_tokenized = new_tokenisation(commnad);
		if (!isBuiltin(command_tokenized))
			ret = _excute(command_tokenized);
	}
	return (ret);
}
