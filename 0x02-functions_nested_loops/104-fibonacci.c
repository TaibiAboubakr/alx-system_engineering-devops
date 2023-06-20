#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long oldsum = 0, oldoldsum = 0, newsum = 1, newsum1=0, newsum2=0;
for (i = 1; i <= 98; i++)
{
oldoldsum = oldsum;
oldsum = newsum;
newsum = oldsum + oldoldsum;
if (newsum <= 2147483647)
printf("%ld, ", newsum);

if (newsum > 2147483647){
newsum1= newsum / 10000000000;
newsum2= newsum % 10000000000;
if (i < 98){
printf("%lu", newsum1);
printf("%lu,", newsum2);
}
else{
printf("%lu", newsum1);
printf("%lu,\n", newsum2);
}
}
}
return (0);
}
