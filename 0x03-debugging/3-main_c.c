#include "main.h"

/**
 * main - takes a date and prints how many days are left, taking
 * leap years into acount
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 3;
	day = 1;
	year = 2008;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}