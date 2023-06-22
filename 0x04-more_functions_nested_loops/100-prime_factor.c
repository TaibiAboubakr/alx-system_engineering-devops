#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int i = 612852475143, l = 0, m = 0;
long int j = 2;
int a = 0, b;
int prime[5] = {0};
while (i > 1)
{
if ((i % j) == 0)
{
m = l;
l = j;
prime[a] = j;
a++;
i /= j;
}
else
j++;
}
for (b = 0 ; b < a ; b++)
{
printf("%d", prime[b]);
if (prime[b] <=  m)
}
printf("\n");
return (0);
}
