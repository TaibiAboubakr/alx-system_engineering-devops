#include "main.h"
#include <stdio.h>
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: integer .
 * Return: last digit
 */
int print_last_digit(int n)
{
int a;
if (n < 0 )
{
a = (-n) % 10;
_putchar('0' + a);
return (a);
}
else
{
a = n % 10;
_putchar('0' + a);
return (a);
}
}
