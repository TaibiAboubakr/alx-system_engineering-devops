#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: integer .
 * Return: last digit
 */
int print_last_digit(int n)
{
int a;
if (n < 0 && n != INT_MIN)
{
a = (-n) % 10;
_putchar('0' + a);
return (a);
}
else if (n == INT_MIN)
{
_putchar('0' + 8);
return (8);
}
else
{
a = n % 10;
_putchar('0' + a);
return (a);
}
}
