#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 for succes, 1 if not
 */

int main(int argc, char *argv[])
{
	int a, b = 0, c, d;
	int i[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		for (c = 0; c < 5; c++)
		{
			d = a / c[i];
			a -= d * c[i];
			b += d;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", b);
	return (0);
}
