#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string input to be compared
 * @s2: the other string to compare against
 *
 * Return: 0 if s1 and s2 are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	/*iterate src and compare with dest*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
		i++;
	}
	return (j);
}

