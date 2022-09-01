#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * in src if no null byt is there
	 * in the first n bytes of the source
	 * the string is placed in the dest
	 * and will not be null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
		/**
		 * if the length of source is less than n
		 * add null bytes to dest
		 */
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
