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
int i;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (i = 97; i < 103; i++)
putchar(i);
putchar('\n');
return (0);
}
