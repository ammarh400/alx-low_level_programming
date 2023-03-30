#include "lists.h"

/**
 *list_len - calculate numbers of element
 *@h: pointer to list_t
 *
 *Return: size_t
 */



size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		return (++count);
	}

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (++count);
}
