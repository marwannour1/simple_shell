#include "main.h"

/**
 *executeProgram - map if command is a builtin or a process
 *@args: command and its flags
 *
 *Return: 1 on sucess, 0 otherwise
 */
int executeProgram(char **args)
{
	char *builtinFunctionList[] = { "env",
		"exit" };

	int(*builtinFunction[])(char **) = { &myEnv, &myExit
	};

	unsigned long int i = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}

	for (; i < sizeof(builtinFunctionList) / sizeof(char *); i++)
	{
		if (strcmp(args[0], builtinFunctionList[i]) == 0)
		{
			return ((*builtinFunction[i])(args));
		}
	}

	return (new_process(args));
}
