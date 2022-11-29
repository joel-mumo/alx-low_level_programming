#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list.
 * @head: A pointer to the head list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
