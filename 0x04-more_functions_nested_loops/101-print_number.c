#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int div = 1;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / div >= 10)
div = div * 10;
while (div != 0)
{
_putchar((n / div)+'0');
n = n % div;
div = div / 10;
}
}
