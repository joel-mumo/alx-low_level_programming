#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check
 *  Return: 0 if list is not looped, else
 *  the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}
