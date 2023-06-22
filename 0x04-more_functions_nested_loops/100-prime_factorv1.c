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
for (j = 2; j <= i ; j++)
{
if (i > 1)
{
if ((i % j) == 0)
{
printf("%d", j);
printf(" ");
i /= j;
j = 1;
}
}
}

printf("\n");
return (0);
}
