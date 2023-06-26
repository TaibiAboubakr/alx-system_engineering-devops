#include <stdio.h>
#include "main.h"
/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/
int main(void)
{
int month;
int day;
int year;
month = 4;
day = 01;
year = 1997;
if (month > 12 || month < 1 || day < 1 || ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 12) && day > 31) ||
((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)||
(month == 2 && day > 29))
{
printf("Invalid date from main: %02d/%02d/%04d\n", month, day, year);
}
else 
{
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);
}
return (0);
}
