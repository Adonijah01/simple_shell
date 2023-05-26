#include "MAIN.h"
/**
 * dave_perls - counts commands and options entered by user
 * @buffer: given command
 * Return: Number of arguments
*/
int dave_perls(char *buffer)
{
	int perls = 0;
	char *delimiter = " =:'\n''\t'";
	int i = 0;
	int j = 0;

	while (buffer[i] != '\0')
	{
		for (j = 0; delimiter[j] != '\0'; j++)
		{
			if (buffer[i] == delimiter[j])
			{
				pearls++;
				break;
			}
		}
		i++;
	}
	return (pearls + 1);
}

/**
 * parsing - splits a given string
 * @buffer:  string
 * @characters: elements
 * Return: tokenisd string
*/

char **parsing(char *buffer, int characters)
{
	int counter = 0;
	char *token = NULL;
	char *delimiter = " :'\n''\t'";
	char **token_necklace = malloc(sizeof(char *) * characters);

	if (token_necklace == NULL)
	{
		return (NULL);
	}
	token = strtok(buffer, delimiter);
	while (token != NULL)
	{
		token_necklace[counter] = strduplicate(token);
		if (token_necklace[counter] == NULL)
		{
			freedom(2, token_necklace);
			return (NULL);
		}
		token = strtok(NULL, delimiter);
		counter++;
	}
	token_necklace[counter] = NULL;
	return (token_necklace);
}
