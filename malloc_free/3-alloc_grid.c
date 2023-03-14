#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - 2 dimesional array
*@width: receives width
*@height: receives height
*Return: integer
*/

int **alloc_grid(int width, int height)
{

	int i, j;
	int **grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
	return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *) calloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}
	}

	return (grid);
}
