#include "main.h"

/**
 * print_diagsums - function that sets the value of a pointer to a char.
 * the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to a multidimensional array
 * @size: size of array
 */
void set_string(char **s, char *to)
{
int i, sum1 = 0, idx = 0, idx2 = 0, sum2 = 0;
for (i = 0; i < size ; i++)
{
idx = i * size + i;
sum1 += a[idx];
idx2 = (i + 1) * size - (i + 1);
sum2 += a[idx2];
}
printf("%d, ", sum1);
printf("%d", sum2);
printf("\n");
}
