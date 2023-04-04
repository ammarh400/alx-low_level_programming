#include "lists.h"

/**
 *add_nodeint_end - add note at end
 *
 *@n: const int n
 *@head: pointer to pointer to listint_t
 *Return: pointer to listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tail = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return (ptr);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	ptr->n = n;
	ptr->next = NULL;
	tail->next = ptr;
	return (ptr);

}
