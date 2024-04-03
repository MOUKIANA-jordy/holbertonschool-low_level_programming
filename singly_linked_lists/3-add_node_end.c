#include "lists.h"
#include <stdlib.h>
#include <string.h>



list_t *add_node_end(list_t **head, const char *str)
{

		if (str == NULL)
		{
		return (NULL);
				}
    		list_t *new = malloc(sizeof(list_t));
		if (new == NULL)
		{
		return (NULL);
				}
    		new ->str = strdup(str);
		if (new ->str == NULL)
		{
		free(new);
		return (NULL);
				}
		new ->next = NULL;
		if (*head == NULL)
		{
		*head = new;
				} 
		else
		{
		list_t *current = *head;}

		while (current->next != NULL)
		{
		current = current->next;
		current->next = new;
				}

		return (new);
}

