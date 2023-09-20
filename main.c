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

		isBuiltin(arrayOfStrings);
		_excute(arrayOfStrings, env);
		}
		free(buffer);
		_free(arrayOfStrings);
		return (0);
	}
	else
	{
		if (argc < 2)
	       	{
            		fprintf(stderr, "Usage: %s command [args...]\n", argv[0]);
            		return 1;
        	}

        
        	arrayOfStrings = tokenisation(argv[1], " ");
        	arrayOfStrings = new_tokenisation(arrayOfStrings);
        if (arrayOfStrings != NULL)
       	{
            _excute(arrayOfStrings, env);
            _free(arrayOfStrings);
        }

        return 0;
    }
	}
