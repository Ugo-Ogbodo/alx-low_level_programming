#include "main.h"

/**
 * print_numbers - print 0-9 only using _putchar twice
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}

