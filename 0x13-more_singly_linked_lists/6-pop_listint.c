#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer to the address of the list
 * Return: 0 if he linked list is empty, otherwise
 * The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int lip;

	if (*head == NULL)
		return (0);

	temp = *head;
	lip = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (lip);
}
