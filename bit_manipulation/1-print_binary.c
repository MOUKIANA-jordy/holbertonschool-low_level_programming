#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

		while (mask > 0)
		{
			if (n & mask)
			{
				putchar('1');
				flag = 1;
			}
			else if (flag)
			{
				putchar('0');
			}
			mask >>= 1;
		}

			if (!flag)
			{
			putchar('0');
					}
}

