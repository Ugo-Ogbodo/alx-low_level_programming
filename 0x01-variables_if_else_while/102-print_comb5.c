#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, u, t, num1, num2;

i = c = u = t = 48;
while (t < 58)
{
	u = 48;
	while (u < 58)
	{
		c = 48;
		while (c < 58)
		{
			i = 48;
			while (i < 58)
			{
				num1 = (t * 10) + u;
				num2 = (c * 10) + i;
				if (num1 < num2)
				{
					putchar(t);
					putchar(u);
					putchar(' ');
					putchar(c);
					putchar(i);
					if (t == 57 && u == 56 && c == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			c++;
		}
		u++;
	}
	t++;
}
putchar('\n');
return (0);
}
