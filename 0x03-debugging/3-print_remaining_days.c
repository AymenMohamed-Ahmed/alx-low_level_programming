#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int i;

	int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	days_in_month[1] = leap ? 29 : 28;

	if (leap)
	{
		if (month > 2)
		{
			day++;
		}
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			return;
		}
	}

	for (i = 0; i < month - 1; i++)
	{
		day += days_in_month[i];
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", leap ? 366 - day : 365 - day);
}
