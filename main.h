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
int _excute(char **array_of_tokens);
ssize_t getUserInput(char **input, size_t *buffer_size, int status);
int isBuiltin(char **args);
void prompt(void);
char **tokenisation(char *str, char *delimiter);
char **new_tokenisation(char **str);


#endif

