#include <stdio.h>
#include "main.h"





int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}
		return (0);
}
