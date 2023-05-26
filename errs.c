#include "MAIN.h"
/**
 * error_msg - writes error messsage.
 * @args: command to be executed.
 * Return: do not return anything.
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
 * error_badcommand - prints the error on the error no.
 * @args: command to be executed.
 * @buffer: command to be executed.
 * Return: do not return antything.
*/
void error_badcommand(char **args, char *buffer)
{
	write(STDOUT_FILENO, "command not found\n", 18);
	freedom(1, buffer);
	buffer = NULL;
	freedom(2, args);
	args = NULL;
}
