#include "main.h"
/**
 * read_stream - read a line from the stream
 *
 * Return: pointer that points the the read line
 */
char *read_stream(void)
{
    char *line = NULL;
    size_t bufsize = 0;
    ssize_t characters_read;

    characters_read = getline(&line, &bufsize, stdin);

    if (characters_read == -1) {
        free(line);
        exit(EXIT_SUCCESS);
    }

    if (characters_read > 0 && line[characters_read - 1] == '\n') {
        line[characters_read - 1] = '\0';
    }

    return line;
}
