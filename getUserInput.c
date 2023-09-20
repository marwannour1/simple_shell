#include "main.h"
/**
 * getUserInput - get the input from the user
 * @input: pointer to the input buffer
 * @status: the exit status
 *
 * Return: -1 on failure, 0 on success
 */
ssize_t getUserInput(char **input)
{
    ssize_t len;
    size_t buffer_size;

    len = getline(input, &buffer_size, stdin);

    if (len == -1)
    {
        perror("failed to get the input");
        exit(-1);
    }
    if (len > 0 && (*input)[len - 1] == '\n')
    {
	    (*input)[len - 1] = '\0';
    }

    return (0);
}
