#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes of the memory area
 * @s: pointer to a string
 * @b: constant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *ps = s;
for (; i < n; i++)
*ps++ = b;
return (s);
}
