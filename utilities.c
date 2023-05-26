#include "main.h"

/**
 * strncomparer - COMPARES TWO STRINGS WITH N SIZE
 * @s1: given STRING 1
 * @s2: given STRING 2
 * @n: SIZE TO CHARACTER COMPARE
 * Return: 0 BOTH STRINGS ARE EQUALS
*/
int strncomparer(char *s1,  char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}

/**
 * strlarge - funtion that RETURNS LENGTH of A GIVEN STRING
 * @s: given STRING
 * Return: NUMBER OF ELEMENTS
*/
int strlarge(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * strduplicate - duplicates a GIVEN STRING
 * @s: GIVEN STRING
 * Return: COPY OF GIVEN STRING
*/
char *strduplicate(char *s)
{
	char *ptr;
	int i, len;

	len = 0;
	if (s == NULL)
		return (NULL);
	len = strlarge(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = s[i];
	ptr[i] = '\0';
	return (ptr);
}

/**
 * strcomparer - compares two given  STRINGS
 * @s1: given S1 STRING
 * @s2: given S2 STRING
 * Return: 0 IF both are EQUALS or ASCII DIFF
*/
int strcomparer(char *s1, char *s2)
{
	int diff, index;

	diff = index = 0;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		diff = s1[index] - s2[index];
		if (diff != 0)
			break;
		index++;
	}
	return (diff);
}

/**
 *strconk - Concatenates TWO STRINGS.
 *@dest: destiny STRING
 *@src: source STRING
 *Return: DEST
 */
char *strconk(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);
}
