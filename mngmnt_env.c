#include "shell.h"

/**
 * env_get_key - gets value envirnment varible
 * @key:variable of interst
 * @data: struct programs data
 * Return: ..
 */
char *env_get_key(char *key, data_of_program *data)
{
	int i, key_length = 0;

	/* validate the arguments */
	if (key == NULL || data->env == NULL)
		return (NULL);

	/* obtains the leng of the variable requested */
	key_length = str_length(key);

	for (i = 0; data->env[i]; i++)
	{/* Iterates through the environ and check for coincidence of the vame */
		if (str_compare(key, data->env[i], key_length) &&
		 data->env[i][key_length] == '=')
		{/* returns the value of the key NAME=  when find it*/
			return (data->env[i] + key_length + 1);
		}
	}
	/* returns NULL if did not find it */
	return (NULL);
}

/**
 * env_set_key - overwrite the value of envrmnt
 * @key: name of var 
 * @value:  value
 * @data:  data
 * Return: 1 if the parameters are NULL, 2 if there is an error or 0 if success.
 */

int env_set_key(char *key, char *value, data_of_program *data)
{
	int i, key_length = 0, is_new_key = 1;

	/* validatethearguments */
	if (key == NULL || value == NULL || data->env == NULL)
		return (1);

	/* obtainsthelenggthofvariablerequested */
	key_length = str_length(key);

	for (i = 0; data->env[i]; i++)
	{/*  looks through the environmentandcheckcoincidenceofthe mame */
		if (str_compare(key, data->env[i], key_length) &&
		 data->env[i][key_length] == '=')
		{/* If key is alreary there */
			is_new_key = 0;
			/* free entre variable*/
			free(data->env[i]);
			break;
		}
	}
	/* make strng*/
	data->env[i] = str_concat(str_duplicate(key), "=");
	data->env[i] = str_concat(data->env[i], value);

	if (is_new_key)
	{/* if the variable is new, it is create at end of actal lst*/
	/* to put the NULL value in following positon */
		data->env[i + 1] = NULL;
	}
	return (0);
}

/**
 * env_remove_key - remove a key
 * @key: to remove
 * @data:program's data
 * Return: 1 if  key is missing, 0 if key doesn't exist;
 */
int env_remove_key(char *key, data_of_program *data)
{
	int i, key_length = 0;

	/* validate the argumens */
	if (key == NULL || data->env == NULL)
		return (0);

	/* obtains the leng of the variable reqestd */
	key_length = str_length(key);

	for (i = 0; data->env[i]; i++)
	{/* runs through through the environment and checks for concidences */
		if (str_compare(key, data->env[i], key_length) &&
		 data->env[i][key_length] == '=')
		{/* if its there, removes then*/
			free(data->env[i]);

			/* move keys one position to others */
			i++;
			for (; data->env[i]; i++)
			{
				data->env[i - 1] = data->env[i];
			}
			/* NULL value at end oflist */
			data->env[i - 1] = NULL;
			return (1);
		}
	}
	return (0);
}


/**
 * print_environ - Prints currnt environment
 * @data: structof the program data
 * Return: nothing
 */
void print_environ(data_of_program *data)
{
	int j;

	for (j = 0; data->env[j]; j++)
	{
		_print(data->env[j]);
		_print("\n");
	}
}

/*
 * Adonijah kiplimo
 */
