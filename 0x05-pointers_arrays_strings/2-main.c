#include "main.h"

/**
 * main - check the code for alx students
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

