#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: the buffer
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int p = 0, i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		j = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + p + i));
			else
				printf(" ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + p + i);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c",  c);
		}
		printf("\n");
		p += 10;
	}
}
