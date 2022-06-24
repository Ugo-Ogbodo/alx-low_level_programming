#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the arguments passed into it
 * @argc: number of arguments passed into it
 * @argv: argument vector of pointers to the string
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

