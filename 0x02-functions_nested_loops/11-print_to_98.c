#include "main.h"
#include <stdio.h>
/**
 * print_to_98  -Write a function that prints all natural numbers from n to 98,
 * followed by a new line..
 * @n: integer to start printing
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
printf(" ");
}
if (n == 98)
printf("\n");
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
printf(" ");
}
if (n == 98)
printf("\n");
n--;
}
}
}

