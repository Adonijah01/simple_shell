#include "main.h"
/**
 * necklace_pearls - COUNTS COMMANDS and options ENTERED BY USER
 * @buffer: GIVEN COMMAND
 * Return: NUMBER Of ARGUMENTS
*/
int necklace_pearls(char *buffer)
{
	int pearls = 0;
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
 * parsing - Function that SPLITS A GIVEN STRING
 * @buffer: Given STRING
 * @characters: Number of ELEMENTS
 * Return: TOKENIZED String
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
