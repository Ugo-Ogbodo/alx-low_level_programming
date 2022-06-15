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
	int c = 0, d = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}
	while (d < n)
	{
		*(dest + c) = *(src + d);
		if (*(src + d) == '\0')
			break;
		c++;
		d++;
	}
	return (dest);
}

