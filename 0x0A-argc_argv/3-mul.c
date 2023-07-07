#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, x, mul = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);
mul *= x;
}
}
printf("%d\n", mul);
return (0);
}
