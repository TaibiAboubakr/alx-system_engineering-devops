#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: integer .
 * Return: last digit
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
n = n * -1;
a = n % 10;
_putchar('0' + a);
return (a);
}
