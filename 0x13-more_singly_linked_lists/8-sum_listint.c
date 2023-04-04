#include "lists.h"

/**
 *sum_listint - sum of linked list
 *
 *@head: pointer to listint_t
 *
 *Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
