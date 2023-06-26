#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: A pointer to a string
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int *arr = a;
int i = 0;
for (; i < n ; i++)
{
printf("%d", arr[i]);
if (i == n - 1)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
}
