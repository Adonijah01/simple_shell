#include "MAIN.h"



/**
* Tokenizedfree_path - Lets tokenized PATH directories also arguments of the user
* @env_args: tokenized environment directory
* @args: tokenized commands
* return: does not return anything
*/




void free_env(char **env_args, char **args)
{
	if (env_args != NULL)
	{
		freedom(2, env_args);
	}
	freedom(2, args);
}
