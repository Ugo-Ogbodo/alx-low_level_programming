#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates two dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **l;

	if (width <= 0 || height <= 0)
		return (NULL);
	l = (int **)malloc(sizeof(int *) * height);
	if (l == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		l[i] = (int *)malloc(sizeof(int) * width);
		if (l[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(l[j]);
			free(l);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			l[i][j] = 0;
		}
	}
	return (l);
}
