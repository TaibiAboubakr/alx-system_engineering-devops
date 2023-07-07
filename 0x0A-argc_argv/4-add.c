#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *endptr;
int i;
long x, sum = 0;
if (argc == 1)
{
printf("0\n");
return (1);
}

for (i = 1; i < argc; i++)
{
x = strtol(argv[i], &endptr, 10);
if (errno != 0 || *endptr != '\0')
{
printf("Error\n");
return (1);
}
if (x > INT_MAX || x < INT_MIN || sum + x > INT_MAX || sum + x < INT_MIN)
{
printf("Error\n");
return (1);
}
sum += x;
}
printf("%ld\n", sum);
return (0);
}
