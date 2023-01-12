#include "lists.h"

/**
 * add_dnodeint_end - add_dnodeint_end
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *sin = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (sin)
	{
		while (sin->next)
			sin = sin->next;

		new->prev = sin;
		sin->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
