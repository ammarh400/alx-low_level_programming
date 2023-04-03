#include "lists.h"

/**
 *print_listint - print list
 *
 *@h: pointer to const listint
 *Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (++count);
	}

	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	printf("%d\n", ptr->n);
	return (++count);
}

