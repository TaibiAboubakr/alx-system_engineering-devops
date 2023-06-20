#include "main.h"
#include <stdio.h>
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: integer .
 * Return: last digit
 */
int print_last_digit(int n)
{
long int a = n, b, c;
if (a < 0)
b = a * -1;
c = b % 10;
_putchar('0' + c);
return (c);
}
