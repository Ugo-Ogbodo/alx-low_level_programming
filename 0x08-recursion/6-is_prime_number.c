#include "main.h"

/**
 * is_prime_number - tells you if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primeNum(2, n));
}

/**
 * primeNum - checks if number is prime
 * @num: factor check
 * @prime: possible prime factors
 *
 * Return: 1 for prime, 0 otherwise
 */

int primeNum(int num, int prime)
{
	if (prime < 2 || prime % num == 0)
		return (0);
	else if (num > prime / 2)
		return (1);
	else
		return (primeNum(num + 1, prime));
}
