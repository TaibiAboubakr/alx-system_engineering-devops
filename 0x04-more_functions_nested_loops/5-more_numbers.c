#include "main.h"
/**
 ** more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line 0 1 29 10 12 13 14
 **/
void more_numbers(void)
{
int j;
int i;
for (i = 0; i <= 9; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j > 9)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
