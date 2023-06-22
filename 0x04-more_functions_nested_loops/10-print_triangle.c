#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size:is the size of the triangle
 */
void print_triangle(int size)
{
int i, j, l;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (l = 1; l <= i; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
