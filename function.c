#include <stdio.h>

/**
 * _compare - compares strings at a position given
 * @x: string to be cmpared
 * @y: strng to compre
 * Return: Nohing
*/
int _compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);

		x++;
		y++;
	}

	return (*y == '\0');
}

/**
 * _strstr - compares strings at a given position.
 * @x: string to be compared.
 * @y: string to br compared.
 * Return: pointer 
*/
char *_strstr(char *x, char *y)
{
	while (*x != '\0')
	{
		if ((*x == *y) && _compare(x, y))
			return (x);
		x++;
	}

	return (NULL);
}


/**
 * _strcpy - anction that copiesstring pointed
 *@dest: character
 *@src:_ character
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

