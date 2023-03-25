#include <stdio.h>
#include "main.h"

/**
 * main - tests the convert_day function
 * Return: Always 0
 */
int main(void)
{
	int month, day, year;
	int result;

	month = 2;
	day = 29;
	year = 2000;
	result	= int convert_day(int month, int day, int year);
	printf("%d/%d/%d is the %d day of the year\n", month, day, year, result);
	return (0);
}
