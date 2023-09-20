#include "main.h"

/**
 *executeProgram - map if command is a builtin or a process
 *@args: command and its flags
 *
 *Return: 1 on sucess, 0 otherwise
 */
int executeProgram(char **args)
{
	char *builtin_func_list[] = { "env",
		"exit" };

	int(*builtin_func[])(char **) = { &myEnv, &myExit
	};

	unsigned long int i = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}

	for (; i < sizeof(builtin_func_list) / sizeof(char *); i++)
	{
		if (strcmp(args[0], builtin_func_list[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}

	return (new_process(args));
}
