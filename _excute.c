#include "main.h"

/**
 * _excute - excuting the command using fork and execv
 *
 * @array_of_tokens: argument_1 description
 * @command: string command
 *
 * Return: return description
 */
int _excute(char *command, char **array_of_tokens)
{
	pid_t pid;
	int status, is_execve_error;

	pid = fork();
	if (pid == -1)
	{
		perror("fork child unable to create");
		return (-1);
	}
	if (pid == 0)
	{
		is_execve_error = execve(command, array_of_tokens, __environ);
		if (is_execve_error == -1)
		{
			perror("unable to excute");
			return (-1);
		}
	}
	else
	{
		wait(&status);
		free(command);

		if (WIFEXITED(status))
			status = WEXITSTATUS(status);

		if (!isatty(STDIN_FILENO))
			return (status);
	}
	return (0);
}

