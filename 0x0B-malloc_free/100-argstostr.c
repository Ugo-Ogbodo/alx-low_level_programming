#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	l = 0;
	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	a = malloc((l + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j + 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (a);
}
