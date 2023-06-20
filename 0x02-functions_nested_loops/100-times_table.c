#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: size of table
 */
void print_times_table(int n)
{
int i, j, r;
if (n < 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
r = i * j;
if (r < 10)
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar('0' + r);
}
else if (r >= 10 && r <= 99)
{
_putchar(' ');
_putchar('0' + (r / 10));
_putchar('0' + r % 10);
}
else
{
_putchar('0' + r / 100);
_putchar('0' + (r / 10) % 10);
_putchar('0' + r % 10);
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
