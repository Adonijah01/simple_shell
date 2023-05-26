#include "main.h"

/**
 * ret_path_line - checks  path variable
 * Return: position of pointers
*/

char *ret_path_line()
{
	char *path = NULL;
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (strcomparer(environ[i], "PATH") == 0)
		{
			path = malloc(sizeof(char *) * (strlarge(environ[i])));
			if (path == NULL)
			{
				freedom(1, path);
				exit(-1);
			}
			_strcpy(path, environ[i]);
			break;
		}
	}
	return (path);
}

/**
 * change_equal_sig - chnge string that is given= two : Character
 * @str: string that was given
 * Return: nthing
*/

void change_equal_sig(char *str)
{
	char **ptr_str = NULL;
	int i = 0;

	ptr_str = &str;

	while ((*(*ptr_str + i)) != '=')
	{
		(*(*ptr_str + i)) = ':';
		i++;
	}
	(*(*ptr_str + i)) = ':';
}

/**
 * _insert_path - inserts dir into command given
 * @args: command given
 * @path: envrmnt path
 * Return: path if exists/given command
*/

char *_insert_path(char **args, char **path)
{
	char *cwd = getcwd(NULL, 0);
	struct stat verify;
	int counter = 0;
	int count_char = 0;
	char *tmp2 = NULL;
	char *dirpath = NULL;

	if (_strstr(args[0], "/") || _strstr(args[0], "."))
	{
		freedom(1, cwd);
		cwd = NULL;
		tmp2 = malloc(sizeof(char *) * (strlarge(args[0])));
		_strcpy(tmp2, args[0]);
		return (tmp2);
	}
	else
	{
		while (path[counter] != NULL)
		{
			chdir(path[counter]);
			if (stat(args[0], &verify) == 0)
			{
				count_char = strlarge(path[counter]) + 1 + strlarge(args[0]);
				tmp2 = malloc(sizeof(char *) * count_char);
				_strcpy(tmp2, path[counter]);
				strconk(tmp2, "/"), strconk(tmp2, args[0]);
				break;
			}
			counter++;
		}
	}
	chdir(cwd);
	if (tmp2 == NULL)
	{
		freedom(1, cwd), cwd = NULL;
		freedom(1, tmp2), tmp2 = NULL;
		return (dirpath);
	}
	dirpath = tmp2, freedom(1, cwd), cwd = NULL;
	return (dirpath);
}

/**
 * getenvpath - creats array of pointr
 * Return: pointer to  dir of arrays that are tokenized
*/

char **getenvpath()
{
	char *tmp = NULL;
	int size_args = 0;
	char **env_args;

	tmp = ret_path_line();
	change_equal_sig(tmp); /*change  PATH= for PATH:*/
	size_args = necklace_pearls(tmp);
	env_args = parsing(tmp, size_args);
	freedom(1, tmp);
	tmp =  NULL;
	return (env_args);
}

/**
 * spaces_buster - createarray of pointrs
 * @buffer: given strng
 * Return: Pointr of an array
*/

int spaces_buster(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\0')
	{
		if (buffer[i] != 32)
		{
			return (0);
		}
	i++;
	}
	return (1);
}


/**
 * Adonijah Kiplimo
 */
