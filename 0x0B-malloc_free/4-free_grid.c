#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *free_grid - free function
 *@grid: pointer pointer to int
 *@height: height
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

