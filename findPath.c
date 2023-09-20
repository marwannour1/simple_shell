#include "main.h"
/**
 * findPath - find and return the full path of an executable file.
 *
 * @filename: The filename of the executable.
 *
 * Return: A dynamically allocated string containing the full path if found,
 *         or NULL if not found.
 */
char *findPath(const char *filename) {
    char *path = getenv("PATH");
    char *token = strtok(path, ":");

    while (token != NULL) {
        size_t full_path_len = strlen(token) + strlen("/") + strlen(filename) + 1;
        char *full_path = malloc(full_path_len);

        if (full_path == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }

        strcpy(full_path, token);
        strcat(full_path, "/");
        strcat(full_path, filename);


        if (access(full_path, X_OK) == 0) {
            return full_path;
        }

        free(full_path);
        token = strtok(NULL, ":");
    }

    return NULL;
}

