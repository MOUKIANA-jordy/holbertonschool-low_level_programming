#include "stdio.h"
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: pointeur to function
 * @action: pointeur to function
 * @size:
 *
 * Return: always
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
