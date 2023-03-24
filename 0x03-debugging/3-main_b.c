#include <stdio.h>
#include "main.h"

int main(void)
{
	int day = 29;
	int month = 2;
	int year = 2000;

	if (is_valid_date(day, month, year))
	{
		printf("%02d/%02d/%d is a valid date\n", day, month, year);

	int days_in_month = get_days_in_month(month, year);
		printf("There are %d days in the month of %02d/%d\n", days_in_month, month, year);

	int day_of_year = get_day_of_year(day, month, year);
		printf("%02d/%02d/%d is day %d of the year\n", day, month, year, day_of_year);

	int days_left_in_year = get_days_left_in_year(day, month, year);
		printf("There are %d days left in the year\n", days_left_in_year);
	}
	else
	{
		printf("%02d/%02d/%d is an invalid date\n", day, month, year);
	}

	return (0);
}

