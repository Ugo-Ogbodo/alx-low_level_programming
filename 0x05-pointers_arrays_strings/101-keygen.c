#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, c, d;
	char e[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[58];

	srand(time(NULL));
	while (d != 2772)
	{
		a = c = d = 0;
		while ((2772 - 122) > d)
		{
			b = rand() % 62;
			key[a] = e[b];
			d += e[b];
			a++;
		}
		while (e[c])
		{
			if (e[c] == (2772 - d))
			{
				key[a] = e[c];
				d += e[c];
				a++;
				break;
			}
			c++;
		}
	}
	key[a] = '\0';
	printf("%s", key);
	return (0);
}
