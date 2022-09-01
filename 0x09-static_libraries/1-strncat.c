#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = 0;

	while (dest[c])
	{
		c++;
	}
	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[c + d] = src[d];
	}
	dest[c + d] = '\0';

	return (dest);
}

