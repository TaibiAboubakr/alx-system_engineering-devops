#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char c = *argv[0];
if (c == 0)
c = 1;
printf("%d\n", argc);
return (0);
}
