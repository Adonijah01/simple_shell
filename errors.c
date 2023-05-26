#include "main.h"
/**
 * error_msg - WRITES ERROR depending on THE ERROR NUMBER
 * @args: Given COMMAND TO EXECUTE
 * Return: nothing
*/
void error_msg(char **args)
{
	int loop = 1;
	char *hsh_home = "";
	char *error_message = malloc(sizeof(char) * 255);
	char *looper = NULL;

	looper = int_to_charac(loop);
	error_message = strduplicate(hsh_home);
	error_message = strconk(error_message, ": ");
	error_message = strconk(error_message, looper);
	error_message = strconk(error_message, ": ");
	error_message = strconk(error_message, args[0]);
	perror(error_message);
	free(error_message);
}

/**
 * error_badcommand - Writes error depending on the ERROR NUMBER
 * @args: Given COMMAND TO EXECUTE
 * @buffer: Given COMMAND TO EXECUTE
 * Return: nothing
*/
void error_badcommand(char **args, char *buffer)
{
	write(STDOUT_FILENO, "command not found\n", 18);
	freedom(1, buffer);
	buffer = NULL;
	freedom(2, args);
	args = NULL;
}

