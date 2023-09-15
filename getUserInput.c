#include "main.h"
/**
 * getUserInput - get the input from the user
 * @input: pointer to the input buffer
 * @buffer_size: size of the input buffer
 * @status: the exit status
 *
 * Return: -1 on failure, 0 on success
 */
ssize_t getUserInput(char **input, size_t *buffer_size, int status)
{
    prompt();

    ssize_t characters_read = getline(input, buffer_size, stdin);

    if (characters_read == -1)
    {
        perror("failed to get the input");
        exit(status);
    }

