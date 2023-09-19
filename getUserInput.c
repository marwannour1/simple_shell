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
    ssize_t characters_read;
    size_t buffer_size;

    characters_read = getline(input, &buffer_size, stdin);

    if (characters_read == -1)
    {
        perror("failed to get the input");
        exit(-1);
    }
    return (0);
}
