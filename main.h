#ifndef SHELL_H
#define SHELL_H
/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>


/*---Macros---*/
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/*---PROTOTYPES---*/
/* main.c */
void shell_interactive(void);
void shell_no_interactive(void);

/* shell_interactive.c */
char *getUserInput(void);
char **lineParser(char *line);
int executeProgram(char **args);

/* execute_args */
int new_process(char **args);

/* shell_no_interactive */
char *readStream(void);

/*---Builtin func---*/
int myExit(char **args);
int myEnv(char **args);

#endif
