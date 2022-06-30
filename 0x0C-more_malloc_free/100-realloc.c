#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previous allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *j;
	unsigned int i, new = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		j = malloc(new_size);
		return (j);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	j = malloc(new_size);
	if (j == NULL)
		return (NULL);
	if (new_size > old_size)
		new = old_size;
	for (i = 0; i < new; i++)
		j[i] = old[i];
	free(ptr);
	return (j);
}
