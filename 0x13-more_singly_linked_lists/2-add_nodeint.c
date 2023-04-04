#include "lists.h"

/**
 *add_nodeint - add node at beginning
 *@head: pointer to pointer listint_t
 *@n: const int n
 *Return: pointer to listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return (ptr);
	}

	ptr->n = n;
	ptr->next = (*head);
	(*head) = ptr;
	return  (ptr);
}
