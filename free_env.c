#include "main.h"
/**
* free_env - tokenized paath directories and  arguments of the user.
* @env_args: envrn directories that are tokenized.
* @args:User commands
* Return: Nothng
*/

void free_env(char **env_args, char **args)
{
	if (env_args != NULL)
	{
		freedom(2, env_args);
	}
	freedom(2, args);
}
