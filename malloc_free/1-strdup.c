#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string using malloc
 * @str: string to duplicate
 * Return : pointer to the new string
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;
	
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = '0'; str != '\0'; i++)
		{
			a = malloc(i * sizeof(*a) + 1);
			if (a == NULL)
			{
				return (NULL);
			}
			for (j = '0'; j < size ; j++)
			{
				a[j] = str[j];

				a[j] = '\0';
			}
		}
		return (a);
}
