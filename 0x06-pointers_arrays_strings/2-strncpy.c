#include "main.h"
/**
 * *_strncpy - function that copy n char into a string
 * @src: pointer to a string
 * @dest: pointer to a buffer
 * @n: integer represent the number of bytes of src to copy into dest
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *p_dest = dest;
int d = 0, c = 0, s = 0;
while (*dest != '\0')
{
d++;
dest++;
}
while (*src != '\0')
{
s++;
src++;
}
src = src - s;
dest = dest - d;
if (d >= s)
{
while (*src != '\0' && c < n)
{
*dest = *src;
dest++;
src++;
c++;
}
if (n > s)
{
for (; c <= d; c++)
*dest = '\0';
dest++;
}
}
return (p_dest);
}

