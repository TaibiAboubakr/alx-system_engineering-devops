#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int cent[6] = {25, 10, 5, 2, 1};
int i = 0;
int x, c = 0;
if (argc != 2)
{

printf("Error\n");
return (1);
}

x = atoi(argv[1]);
if (x < 0)
{
printf("0\n");
return (0);
}
while (i < 5)
{
if (x / cent[i] >= 1)
{
c += x / cent[i];
x = x % cent[i];
i++;
}
if (x == 0)
break;
if (x / cent[i] < 1)
i++;
}
printf("%d\n", c);
return (0);
}
