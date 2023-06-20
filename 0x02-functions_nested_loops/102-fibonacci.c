#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long i, oldsum = 0, oldoldsum = 0, newsum = 1;
for (i = 1; i <= 50; i++)
{
oldoldsum = oldsum;
oldsum = newsum;
newsum = oldsum + oldoldsum;
if (i < 50)
printf("%ld, ", newsum);
else
printf("%ld \n", newsum);
}
return (0);
}
