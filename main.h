#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _env();
int _excute(char *command, char **array_of_tokens);
int _exit(char **args);
void allocateStringMemory(char **arrayOfStrings, size_t strSize, str *errorMessage);
void allocateArrayMemory(char **arrayOfStrings, size_t strSize, str *errorMessage);
ssize_t getUserInput(char **input, size_t *buffer_size, int status);
int isBuiltin(char **args);
void prompt(void);
char **tokenisation(char *str, char *delimiter);


#endif

