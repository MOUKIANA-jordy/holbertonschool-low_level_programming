#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds node to end of linked list
*
* @head: Double Pointer
*
* @str: Pointer to struct pointer
*
* Return: address of the new element, or NULL
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new_node;
	size_t n = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
	return (NULL);
	}
	while (str[n])
	{
		n++;
	}
	new_node->len = n;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		current = *head;

	while (current->next)
	{
		current = current->next;
	}
		current->next = new_node;
	}

	return (new_node);
}

