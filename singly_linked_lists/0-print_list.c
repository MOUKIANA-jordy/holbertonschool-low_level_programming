#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
			if (node->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", node->len, node->str);
			}
			node = node->next;
			count++;
	}
	return (count);
}


