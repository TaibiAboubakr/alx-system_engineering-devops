#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: A pointer to an array
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int l = n - 1, i, s;
for (i = 0; i < n && i <= l ; i++)
{
s = a[i];
a[i] = a[l];
a[l] = s;
l--;
}
}
