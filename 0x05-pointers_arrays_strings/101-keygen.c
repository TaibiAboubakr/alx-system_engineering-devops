#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generate a random password for crackme
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
int sum = 2772;
for (i = 57; sum > 0 && i > 0;)
{
if (sum - i >= 0)
{
putchar (i);
sum = sum - i;
}
else
i--;
}
return (0);
}
