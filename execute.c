
#include "main.h"
/**
 * execo - executes given command
 * @command: command
 * @args: arguments
 * Return: Exit = 0 / erro
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


/**
 * Adonijah Kiplimo
 */
