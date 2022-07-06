#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add a and b
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first number
 * @b: second number
 * Return: diffrence
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first number
 * @b: second number
 * Return: multiplication of a by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
