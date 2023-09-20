#include "main.h"

/**
 * shell_no_interactive - unix command line interpreter
 *
 * Return: void
 */
void shell_no_interactive(void)
{
 char *line;
 char **args;
 int status = -1;

 do {
  line = readStream();
  args = lineParser(line);
  status = executeProgram(args);
  
  free(line);
  free(args);
  
  if (status >= 0)
  {
   exit(status);
  }
 } while (status == -1);
}
