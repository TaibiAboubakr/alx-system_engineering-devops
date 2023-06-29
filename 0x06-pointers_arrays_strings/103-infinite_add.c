
#include "main.h"
/**
 * reverse_carray - reverses the content of an array of integers.
 * @a: A pointer to an array
 * @n: is the number of elements of the array
 */
void reverse_carray(char *a, int n)
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
/**
 * *infinite_add - function that adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: a pointer to the result string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int dn = 0, dm = 0, i, ln = 0, lm = 0, g, sum, rem = 0, cr = 0;
for (i = 0; n1[i] != '\0' ; i++)
ln++;
for (i = 0; n2[i] != '\0' ; i++)
lm++;
if (ln > lm)
dn = ln - lm;
if (lm > ln)
dm = lm - ln;
g = (ln > lm) ? ln : lm;
if (ln == 0 || lm == 0)
return (0);
if (lm != 0 && ln != 0)
{
i = g - 1;
for (; i >= 0; i--)
{
if (i - dm >= 0 && i - dm >= 0)
sum = (((n1[i - dm] - 48) + (n2[i - dn] - 48) + rem));
else if (i - dm >= 0)
sum = (((n1[i - dm] - 48) + rem));
else if (i - dn >= 0)
sum = (((n2[i - dn] - 48) + rem));
rem = sum / 10;
if (cr > size_r)
{
return (0);
break;
}
r[cr] = (sum % 10)  + '0';
cr++;
if (i == 0 && rem != 0)
{
r[cr] = rem + '0';
cr++;
}
}
reverse_carray(r, cr);
}
return (r);
}
