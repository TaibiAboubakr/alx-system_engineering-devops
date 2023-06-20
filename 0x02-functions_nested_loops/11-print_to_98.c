#include "main.h"
/**
 * print_to_98  -Write a function that prints all natural numbers from n to 98,
 * followed by a new line..
 * @n: integer to start printing
 */
void print_to_98(int n)
{
int i, a, b, c, d;
if (n >= 0 && n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i <= 9)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
else
{
b = i / 10;
c = i % 10;
_putchar('0' + b);
_putchar('0' + c);
if (i == 98)
break;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i >= 100)
{
a = i  / 100;
b = (i / 10) % 10;
c = i % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('0' + c);
_putchar(',');
_putchar(' ');
}
else
{
b = (i / 10) % 10;
c = i % 10;
_putchar('0' + b);
_putchar('0' + c);
if (i == 98)
break;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
if (n < 0)
{
for (i = n; i <= 98; i++)
{
if (i <= -10)
{
a = i * -1;
b = (a / 10) % 10;
c = a % 10;
_putchar('-');
_putchar('0' + b);
_putchar('0' + c);
_putchar(',');
_putchar(' ');
}
else if (i > -10 && i < 0)
{
d = i * -1;
_putchar('-');
_putchar('0' + d);
_putchar(',');
_putchar(' ');
}
else if (i >= 0 && i <= 9)
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
else
{
b = i / 10;
c = i % 10;
_putchar('0' + b);
_putchar('0' + c);
if (i == 98)
break;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
