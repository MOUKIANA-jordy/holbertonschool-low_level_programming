#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -
 * @array:
 * @size: If size is not positive, return -1
 * @cmp: If cmp function returns non-zero value
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
		int i;
	
		if (array == NULL ||  cmp == NULL ||  size <= 0)
		{       
			return (-1);
		}
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		return (-1);

}
