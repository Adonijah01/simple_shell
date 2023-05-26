
#include "main.h"
/**
 * necklace_pearls -commands and options are counted as  entered by teh usr
 * @buffer: command gven
 * Return: arguments numbers
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
 * parsing - function that splits a func
 * @buffer: string given
 * @characters: elements amount
 * Return: string that is tokenised
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


/**
 * Adonijah Kiplimo
 */
