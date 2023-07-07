#include <stdio.h>
#include <stdlib.h>


/**
 * main -  a program that adds positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int x, sum = 0;
if (argc == 1)
{
printf("0\n");
return (1);
}

for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);

sum += x;
}
printf("%d\n", sum);
return (0);
}
