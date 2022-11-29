#include "lists.h"
#include "strings.h"

/**
 * add_node - adds a new node
 * @head: A pointer to the head of the list
 * @str: The string to be added
 * Return: address of the new element,else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dpl;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dpl = strdup(str);
	if (dpl == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0, str[len];)
		len++;

	new->str = dpl;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
