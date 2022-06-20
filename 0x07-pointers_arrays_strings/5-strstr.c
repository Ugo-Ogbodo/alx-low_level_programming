#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to the begining of needle in a haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack++;
	}
	return ('\0');
}
