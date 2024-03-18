#include "stdio.h"


/**
 * print_name - prints a name
 * @name: the name to prints
 * @f: pointeur to function
 *
 * Return: always
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);

		_putchar('\n');
		
		return(0);
}
