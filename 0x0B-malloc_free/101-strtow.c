#include "main.h"
#include <stdlib.h>

/**
 * count - counts the number of words in astring
 * @s: string to count
 *
 * Return: ineger of the number of words
 */

int count(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of string
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, p = 0;
	char **m;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	m[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			m[p] = (char *)malloc(j * sizeof(char));
			j--;
			if (m[p] == NULL)
			{
				for (k = 0; k < p; k++)
					free(m[k]);
				free(m[n - 1]);
				free(m);
				return (NULL);
			}
			for (l = 0; i < j; l++)
				m[p][l] = str[i + l];
			m[p][l] = '\0';
			p++;
			i += j;
		}
		else
			i++;
	}
	return (m);
}
