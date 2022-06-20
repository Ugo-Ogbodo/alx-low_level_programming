#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: memory spce to be filled
 * @b: byte to fill it with
 * @n: number of spaces to fill
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
