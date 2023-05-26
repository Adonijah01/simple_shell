#include <stdio.h>

/**
 * _compare - Compares two strings
 * @x: string that will be compared
 * @y: String to be compared.
 * Return: Nothiing
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
 * _strstr - Compatwo strings at a position
 * @x: The string that will be compared
 * @y: The string to be compared
 * Return: to the first instance
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
 * _strcpy - Copies the string pointd to by thj src.
 *@dest: Character
 *@src:_ Character
 * Return: Desttination
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
