#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **dimensional;
	int a, b;

	if (height < 1 || width < 1)
	return ('\0');
	dimensional = malloc(height * sizeof(int *));
	if (dimensional == '\0')
	{
		free(dimensional);
		return ('\0');
	}
		for (a = 0; a < height; a++)
	{
		dimensional[a] = malloc(width * sizeof(int));
		if (dimensional[a] == '\0')
		{
			for (a--; a >= 0; a--)
			free(dimensional[a]);
			free(dimensional);
			return ('\0');
		}
	}
	for (a = 0; a < height; a++)
	for (b = 0; b < width; b++)
	dimensional[a][b] = 0;
	return (dimensional);
}
