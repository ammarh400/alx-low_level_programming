#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *alloc_grid - allocate multi array
 *@height: height of the array
 *@width: width of the array
 *Return: pointer pointer to char
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
