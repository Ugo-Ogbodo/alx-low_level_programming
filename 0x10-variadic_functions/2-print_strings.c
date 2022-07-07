#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints string
 * @separator: string to be printed between string
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char post;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		post = va_arg(ap, char *);
		if (post == NULL)
			printf("(nil)");
		else
			printf("%s", post);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
