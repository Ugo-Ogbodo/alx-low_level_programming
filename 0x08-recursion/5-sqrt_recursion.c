#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the integer
 *
 * Return: natural square root, or -1 when no natural square
 */

int _sqrt_recursion(int n)
{
	return (nat_square(n, 1));
}

/**
 * nat_square - helper function, finds the square root
 * @i: integer, square root to be determined
 * @j: increment value, to compare with value i
 *
 * Return: square root if natural square, or -1 if not
 */

int nat_square(int i, int j)
{
	int sqroot;

	sqroot = j * j;
	if (sqroot == i)
		return (j);
	else if (sqroot < i)
		return (nat_square(i, j + 1));
	else
		return (-1);
}
