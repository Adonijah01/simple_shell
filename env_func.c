#include "main.h"
/**
 * env_func - displays environment variables.
 * Return: 0 upon successs
*/
int env_func(void)
{
	int counter = 0, lenght = 0;

	while (environ[counter] != NULL)
	{
		lenght = strlarge(environ[counter]);
		write(STDOUT_FILENO, environ[counter], lenght);
		write(STDOUT_FILENO, "\n", 1);
		counter++;
	}
	return (0);
}


/**
 *Adonijah Kiplimo
 /
