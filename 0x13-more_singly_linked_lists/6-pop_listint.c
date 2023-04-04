#include "lists.h"

/**
 *pop_listint - delete first node from the list
 *
 *@head: pointer to pointer to listint_t
 *Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (n);
}
