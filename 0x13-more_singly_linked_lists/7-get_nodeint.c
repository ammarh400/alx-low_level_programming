#include "lists.h"

/**
 *get_nodeint_at_index - get a node at a se
 *
 *@head: pointer to listint_t
 *@index: index of node
 *Return: pointer to listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}

	return (NULL);
}

