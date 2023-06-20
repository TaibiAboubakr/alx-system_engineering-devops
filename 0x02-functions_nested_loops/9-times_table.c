#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0..
 */
void times_table(void)
{
int i, j, r, o, d;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
if (r < 10)
{
if (j != 0)
_putchar(' ');
_putchar('0' + r);
}
else
{
d = (r / 10);
o = r % 10;
_putchar('0' + d);
_putchar('0' + o);
}
if (j == 9)
break;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
j = 0;
}
}
