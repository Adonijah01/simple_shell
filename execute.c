#include "main.h"
/**
 * execo - Executes a GIVEN COMMAND
 * @command: GIVEN COMMAND
 * @args: COMMAND ARGUMENTS
 * Return: Exit = 0 or error NUMBER
*/
int execo(char *command, char **args)
{
	int status;
	pid_t pid;
	int errcode = 0;

	pid = fork();
	if (!pid)
	{
		if (execve(command, args, environ) == -1)
		{
			freedom(1, command);
			command = NULL;
			errcode = errno;
			error_msg(args);
			exit(errcode);
		}
		else
		{
			freedom(1, command);
			command = NULL;
			exit(errcode);
		}
	}
	else
		wait(&status);

	freedom(1, command);
	command = NULL;
	errcode = 0;
	return (errcode);
}

