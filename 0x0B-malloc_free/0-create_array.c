#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initialize it with a char
 * @size: size of an array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or to the NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
