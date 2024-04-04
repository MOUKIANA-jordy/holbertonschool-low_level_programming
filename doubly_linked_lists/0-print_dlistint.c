#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - count number of nodes
 * @h: head of double linked list
 * Return: number of nodes, or NULL if failed
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	node_count++;
	}

	return (node_count);
}
