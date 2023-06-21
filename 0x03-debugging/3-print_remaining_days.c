#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void 96* 97 98 99 2000* 2001 2002 2003 2004* 29/02/1997
*/
void print_remaining_days(int month, int day, int year)
{
int newday = day;
if ((year % 4 == 0 || year % 400 == 0) && month >= 2)
newday = day - 1;
if (month > 12 || month < 1 || day < 1 || (month == 1 && newday > 31) ||

(month == 3 && newday > 90) ||
(month == 4 && newday > 120) ||
(month == 5 && newday > 151) ||
(month == 6 && newday > 181) ||
(month == 7 && newday > 212) ||
(month == 8 && newday > 243) ||
(month == 9 && newday > 273) ||
(month == 10 && newday > 304) ||
(month == 11 && newday > 334) ||
(month == 12 && newday > 365))
printf("Invalid date \n");
else
{
if (year % 4 == 0 || year % 400 == 0)
{
if (month > 2 && day >= 60)
day++;
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
}
