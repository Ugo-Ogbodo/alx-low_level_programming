#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	c = 48;

	while (c < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (c != i && c < i)
			{
				putchar(c);
				putchar(i);
				if (i == 57 && c == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
