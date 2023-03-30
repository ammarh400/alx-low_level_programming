#include "lists.h"

/**
 *free_list - free linked list
 *
 *@head: pointer to list_t
 *
 *Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp;

	if (head == NULL)
		return;

	while (ptr->next != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp->str);
		free(temp);
	}
	free(ptr->str);
	free(ptr);
	head = NULL;
}

