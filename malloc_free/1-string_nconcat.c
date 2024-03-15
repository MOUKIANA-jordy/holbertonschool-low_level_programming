#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
	char *duplicate;
	int longueur = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[longueur] != '\0')
	{
		longueur++;
	}

	duplicate = (char *)malloc(longueur * sizeof(char) + 1);

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < longueur; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = '\0';

	return (duplicate);
}
