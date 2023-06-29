#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int div = 1;
unsigned int k = n;
if (n < 0)
{
_putchar('-');
k = -k;
}
while (k / div >= 10)
div = div * 10;
while (div != 0)
{
_putchar((k / div)+'0');
k = k % div;
div = div / 10;
}
}
