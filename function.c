#include <stdio.h>

/**
 * _compare - compares two STRINGS AT A GIVEN POSITION
 * @x: STRING TO BE COMPARED
 * @y: sTRING TO COMPARE
 * Return: NOHING
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
 * _strstr - Compares two strings AT A GIVEN POSITION.
 * @x: string to be compared
 * @y: STRING TO COMPAR
 * Return: POINTER TO THE FIRST OCCURENCE
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
 * _strcpy - Unction that copies the STRING POINTED TO SRC
 *@dest: CHAR
 *@src:_ CHAR
 * Return: DEST
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
