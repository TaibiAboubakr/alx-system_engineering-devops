#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int i = 612852475143;
int j = 2;
while (i > 1)
{
if ((i % j) == 0)
{
printf("%d", j);
if (i / j != 1)
printf(",");
i /= j;
}
else
j++;
}
printf("\n");
return (0);
}
