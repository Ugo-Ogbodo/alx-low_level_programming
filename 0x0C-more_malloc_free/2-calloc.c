#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *j;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		j[i] = 0;
	return (j);
}
