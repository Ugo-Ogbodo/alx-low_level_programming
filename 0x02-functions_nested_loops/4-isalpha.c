#include "main.h"
/**
 * _isalpha - Check if character is an alphabetic character
 * @C: type int character
 * Return: 1 if letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

