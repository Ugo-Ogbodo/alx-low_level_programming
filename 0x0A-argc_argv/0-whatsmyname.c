#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */

int main(int arg __attribute__((unused)), char *argv[])
{
	int i = 0;

	printf("%s\n", argv[0]);
	return (0);
}

