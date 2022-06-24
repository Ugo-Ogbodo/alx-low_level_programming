#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
