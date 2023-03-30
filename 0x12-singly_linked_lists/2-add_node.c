#include "lists.h"

/**
 *add_node - add node at the beginning
 *
 *@head: pointer to pointer to list_t
 *@str: pointer to char
 *Return: pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

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
	ptr->next = (*head);
	*head = ptr;

	return (ptr);
}

