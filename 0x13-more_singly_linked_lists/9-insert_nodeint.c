#include "lists.h"

/**
 *insert_nodeint_at_index - insert node at specified index
 *@n: int
 *@idx: index of the added node
 *@head: pointer to pointer to listint_t
 *Return: pointer to the added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp->n = n;
		temp->next = *head;
		(*head) = temp;
		return (*head);
	}

	if (*head == NULL && idx != 0)
		return (NULL);

	ptr = *head;
	i++;

	while (ptr)
	{
		if (i == idx)
		{
			temp->n = n;
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		ptr = ptr->next;
		i++;
	}

	return (NULL);
}




