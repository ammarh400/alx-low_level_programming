#include "lists.h"

/**
 *delete_nodeint_at_index - delete node from the list
 *
 *@head: head of the node
 *@index: index
 *Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *ptr;
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	ptr = *head;
	temp = ptr->next;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(ptr);
		return (1);
	}

	if ((*head)->next == NULL)
	{
		return (-1);
	}

	while (ptr)
	{
		if (i ==  index - 1)
		{
			ptr->next = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
		temp = temp->next;
		i++;
	}

	return (-1);
}
