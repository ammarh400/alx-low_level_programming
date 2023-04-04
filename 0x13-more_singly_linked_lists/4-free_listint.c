#include "lists.h"

/**
 *free_listint - free linked list
 *
 *@head: pointer to
 *Return: Nothing
 */

void free_listint(listint_t *head)
{

	listint_t *ptr = head;

	if (head == NULL)
		return;

	while (ptr->next != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
	free(ptr);
	head = NULL;
}
