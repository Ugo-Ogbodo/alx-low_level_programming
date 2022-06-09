#include "main.h"

/**
 * print_most_numbers - print 0 - 9 exclude 2 and 4
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}

