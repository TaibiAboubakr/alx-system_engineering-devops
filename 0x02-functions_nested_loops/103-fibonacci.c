#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long i, oldsum = 0, oldoldsum = 0, newsum = 1, allsum = 0;
for (i = 1; i <= 50; i++)
{
oldoldsum = oldsum;
oldsum = newsum;
newsum = oldsum + oldoldsum;
if (newsum < 4000000)
{
allsum += newsum;
}
}
printf("%ld\n", allsum);
return (0);
}
