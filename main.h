#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

void shell_interactive(void);
void shell_no_interactive(void);

char *getUserInput(void);
char **lineParser(char *line);
int executeProgram(char **args);

int new_process(char **args);

char *readStream(void);

int myExit(char **args);
int myEnv(char **args);


#endif
