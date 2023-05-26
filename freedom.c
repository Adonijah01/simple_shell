#include "main.h"
/**
* freedom - free memry
* @n: arguments
* Return: null
*/

void freedom(int n, ...)
{
	int i = 0;
	char **ptr2 = NULL;
	char *ptr1 = NULL;
	va_list arg;

	va_start(arg, n);

	if (n == 1)
	{
		ptr1 = va_arg(arg, char *);
		free(ptr1);
	}

	if (n == 2)
	{
		ptr2 = va_arg(arg, char **);
		while (ptr2[i] != NULL)
		{
			free(ptr2[i]);
			i++;
		}
		free(ptr2);
	}
}

/**
* free_all - frees tokenised path directories and user arguments
* @dptr1: first double pointer
* @dptr2: second double pointer
* @sptr1: first single pointer
* @sptr2: second double pointer
* Return: Nothing
*/

void free_all(char **dptr1, char **dptr2, char *sptr1, char *sptr2)
{

	if (dptr1 != NULL)
	{
		freedom(2, dptr1);
		dptr1 = NULL;
	}
	if (dptr2 != NULL)
	{
		freedom(2, dptr2);
		dptr2 = NULL;
	}
	if (sptr1 != NULL)
	{
		free(sptr1);
		sptr1 = NULL;
	}
	if (sptr2 != NULL)
	{
		free(sptr2);
		sptr2 = NULL;
	}

}

