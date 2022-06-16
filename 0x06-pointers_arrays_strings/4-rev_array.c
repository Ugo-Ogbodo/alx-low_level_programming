#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 *
 * @a: pointer to int array
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int ren, c, d;

	c = 0;
	d = n - 1;

	while (c < d)
	{
		ren = a[c];
		a[c] = a[d];
		a[d] = ren;
		c++;
		d--;
	}
}
