#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; acccept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}

