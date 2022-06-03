#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, c, u;

	i = 48;
	c = 48;
	u = 48;

	while (c < 58)
	{
		i = 48;
		while (i < 58)
		{
			u = 48;
			while (u < 58)
			{
				if (c != i && c != u && i != g && c < i && i < u)
				{
					putchar(c);
					putchar(i);
					putchar(u);
					if (i == 56 && c == 55 && u == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				u++;
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
