#include "main.h"
/**
* print_number - prints an integer.
* @n:integer to print
 */
void print_number(int n)
{
int a;
a = n;
if (n < 0)
a = n * -1;
if (a >= 0 && a < 10)
{
if (n < 0)
_putchar('-');
_putchar('0' + a);
}
else if (a >= 10 && a < 100)
{
if (n < 0)
_putchar('-');
_putchar('0' + a / 10);
_putchar('0' +  a % 10);
}
else if (a >= 100 && a < 1000)
{
if (n < 0)
_putchar('-');
_putchar('0' + a / 100);
_putchar('0' + (a % 100) / 10);
_putchar('0' +  a % 10);
}
else if (a >= 1000 && a < 9999)
{
if (n < 0)
_putchar('-');
_putchar('0' + a / 1000);
_putchar('0' + (a % 1000) / 100);
_putchar('0' + (a % 100) / 10);
_putchar('0' + a % 10);
}
}
