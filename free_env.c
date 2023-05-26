#include "main.h"
/**
* free_env - FREES TOKENIZED PATH directories and user's ARGUMENTS
* @env_args: TOKENIZED environment DIRECTORIES
* @args: TOKENIZED user's COMMANDS
* Return: NOTHING
*/

void free_env(char **env_args, char **args)
{
	if (env_args != NULL)
	{
		freedom(2, env_args);
	}
	freedom(2, args);
}
