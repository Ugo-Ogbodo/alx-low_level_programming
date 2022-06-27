#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	l = malloc(i * sizeof(char));
	if (l == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		l[j] = str[j];
	}
	return (l);
}
