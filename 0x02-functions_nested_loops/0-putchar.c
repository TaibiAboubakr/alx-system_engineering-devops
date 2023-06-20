#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int j = 0;
char printputchar[] = "_putchar";
while (printputchar[j] != '\0')
{
putchar(printputchar[j]);
j++;
}
putchar('\n');
return (0);
}
