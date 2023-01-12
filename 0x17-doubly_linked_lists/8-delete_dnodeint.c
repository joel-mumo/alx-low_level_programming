#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the list
 * @index: position of the node to delete
 * Return: 1 on success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *to_del = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			while (i != index && to_del)
			{
				tmp = to_del;
				to_del = tmp->next;
				i++;
			}
			if (i == index && to_del)
			{
				tmp->next = to_del->next;
				if (to_del->next)
					to_del->next->prev = tmp;
				free(to_del);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}
