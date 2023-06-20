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
long int b;
if (n < 0)
{
b = n;
b = n * -1;
b = b % 10;
_putchar('0' + b);
return (b);
}
else
{
a = n;
a = n % 10;
_putchar('0' + a);
return (a);
}
}
