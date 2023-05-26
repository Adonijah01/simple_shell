#include "main.h"
/**
 * args_constructor - Executes command lines entered by PIPE
 * @buffer: command Name
 * Return: 0
*/
char **args_constructor(char *buffer)
{
	int size = 0;
	char **user_command = NULL;

	size = necklace_pearls(buffer);
	user_command = parsing(buffer, size);
	if (user_command == NULL)
	{
		freedom(2, user_command);
		user_command = NULL;
	}

	return (user_command);
}
