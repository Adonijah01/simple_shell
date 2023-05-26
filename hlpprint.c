#include "shell.h"

/**
 * _print - puts array of chars in the standard outpt
 * @string: pointr to  aray of chars
 * Return: the no of bytes.
 * On error, -1 is returned, and errno is sert.
 */
int _print(char *string)
{
	return (write(STDOUT_FILENO, string, str_length(string)));
}
/**
 * _printe - puts array  chars in the stndard eror
 * @string: pointerthat points to the array of characters
 * Return: the number of bytes writed or .
 * On error, -1 is returned, and err number is set.
 */
int _printe(char *string)
{
	return (write(STDERR_FILENO, string, str_length(string)));
}

/**
 * _print_error - writes a array of chars in the stndart eror
 * @data: progs data
 * @errorcode: error code to print
 * Return: the number of bytes writed or .
 * on error, -1 is returned, and thus errno is set.
 */
int _print_error(int errorcode, data_of_program *data)
{
	char n_as_string[10] = {'\0'};

	long_to_string((long) data->exec_counter, n_as_string, 10);

	if (errorcode == 2 || errorcode == 3)
	{
		_printe(data->program_name);
		_printe(": ");
		_printe(n_as_string);
		_printe(": ");
		_printe(data->tokens[0]);
		if (errorcode == 2)
			_printe(": Illegal number: ");
		else
			_printe(": can't cd to ");
		_printe(data->tokens[1]);
		_printe("\n");
	}
	else if (errorcode == 127)
	{
		_printe(data->program_name);
		_printe(": ");
		_printe(n_as_string);
		_printe(": ");
		_printe(data->command_name);
		_printe(": not found\n");
	}
	else if (errorcode == 126)
	{
		_printe(data->program_name);
		_printe(": ");
		_printe(n_as_string);
		_printe(": ");
		_printe(data->command_name);
		_printe(": Permission denied\n");
	}
	return (0);
}
