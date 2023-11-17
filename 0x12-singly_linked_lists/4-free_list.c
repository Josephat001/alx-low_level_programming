#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;  /* Save the next node */
		free(current->str);    /* Free the string */
		free(current);         /* Free the current node */
		current = temp;        /* Move to the next node */
	}
}
