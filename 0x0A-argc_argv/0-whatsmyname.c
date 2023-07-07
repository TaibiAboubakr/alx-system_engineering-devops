#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = argc;
if (i == 0)
printf("Error");
printf("%s\n", argv[0]);
return (0);
}
