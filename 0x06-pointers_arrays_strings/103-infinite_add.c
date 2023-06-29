#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * reverse_carray - reverses the content of an array of characters.
 * @a: A pointer to an array
 * @n: The number of elements in the array
 */
void reverse_carray(char *a, int n)
{
int l = n - 1, i, s;
for (i = 0; i < n && i <= l; i++)
{
s = a[i];
a[i] = a[l];
a[l] = s;
l--;
}
}

/**
 * infinite_add - function that adds two numbers.
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer that stores the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result string, or 0 if the result can't fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int max_len = size_r - 1;
int carry = 0;
int i = 0;
if (len1 > max_len || len2 > max_len)
return (0);
while (len1 > 0 || len2 > 0)
{
int digit1 = (len1 > 0) ? n1[--len1] - '0' : 0;
int digit2 = (len2 > 0) ? n2[--len2] - '0' : 0;
int sum = digit1 + digit2 + carry;
if (i >= max_len)
return (0);

r[i++] = sum % 10 + '0';
carry = sum / 10;
}
if (carry > 0)
{
if (i >= max_len)
return (0);
r[i++] = carry + '0';
}
r[i] = '\0';
reverse_carray(r, i);
return (r);
}
