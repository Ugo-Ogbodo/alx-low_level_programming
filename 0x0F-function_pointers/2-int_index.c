#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = -1;

	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	while (++j < size)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
