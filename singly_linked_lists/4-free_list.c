#include <stdlib.h>
#include "lits.t"



void free_list(list_t *head)
{
	list_t *current = head;
		while (current != NULL)
		{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
				}
}

int main()
{
    list_t *head = malloc(sizeof(list_t));
    head->str = "Example";
    head->next = NULL;

    free_list(head);

    return 0;
}
