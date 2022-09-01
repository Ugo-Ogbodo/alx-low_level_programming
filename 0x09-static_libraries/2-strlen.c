#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string.
 *
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
