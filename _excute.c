#include "main.h"

/**
 * _excute - excuting the command using fork and execv
 *
 * @array_of_tokens: argument_1 description
 *
 * Return: return description
 */
int _excute(char **array_of_tokens, char **environ)
{
	pid_t pid;
	int status, is_execve_error = 0;

	pid = fork();
	if (pid == -1)
	{
		perror("fork child unable to create");
		return (-1);
	}
	if (pid == 0)
	{
		is_execve_error = execve(array_of_tokens[0], array_of_tokens, environ);
		if (is_execve_error == -1)
		{
			perror("unable to excute");
			return (-1);
		}
	}
	else if (pid > 0)
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);

		if (!isatty(STDIN_FILENO))
			return (status);
	}
	return (0);
}
