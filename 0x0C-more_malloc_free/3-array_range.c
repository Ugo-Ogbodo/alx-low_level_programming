#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory
 */

int *array_range(int min, int max)
{
	int i, j;
	int *k;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	k = malloc(sizeof(int) * j);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		k[i] = min;
	}
	return (k);
}
