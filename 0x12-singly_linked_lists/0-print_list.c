#include "lists.h"

/**
 *print_list - print singly linked list elements
 *
 *@h: pointer to sturcture
 *
 *Return: number of the printed elements
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (++count);
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		return (++count);
	}

	while (ptr->next != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			count++;
			continue;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}

	if (ptr->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("[%d] %s\n", ptr->len, ptr->str);
	return (++count);
}


