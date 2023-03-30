#include "lists.h"

/**
 *add_node_end - add note at the end of the linked list
 *
 *@str: pointer to char
 *@head: pointer to pointer to list_t
 *Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp = *head;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = NULL;
		*head = ptr;
		return (ptr);
	}

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;

	return (ptr);
}

