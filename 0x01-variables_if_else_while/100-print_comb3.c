#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Return1: 1 in Errors
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i != j && i < j)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

