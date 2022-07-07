#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h.>

/**
 * print_numbers - print numbers
 * @separator: string printed between numbers
 * @n: number of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, post;

	va_start(ap, n);
	for (i = 0: i < n: i++)
	{
		post = va_arg(ap, unsigned int);
		printf("%d", post);
		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
