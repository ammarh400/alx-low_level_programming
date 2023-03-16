#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocate the pointer
 *@ptr: pointer to be reallocated
 *@old_size: older size of the ptr
 *@new_size: newer size of the ptr
 *Return: pointer to newely allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc((new_size + old_size) * sizeof(char));
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = realloc(ptr, new_size * sizeof(char));
	if (new_ptr == NULL)
		return (NULL);

	return (new_ptr);
}

