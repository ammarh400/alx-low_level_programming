#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *struct list_t - structure
 *@str: pointer to char
 *@len: len of str
 *@next: pointer to struct list_t
 */

struct list_t
{
	char *str;
	int len;
	struct list_t *next;
};
typedef struct list_t list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);



#endif
