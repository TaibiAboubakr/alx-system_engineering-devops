#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @n: bytes of the memory area
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to copy from memory area src to memory area dest
 * Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0, j = 0;
char *pdest = dest;
while (src[j])
j++;
for (; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}
while (n > j)
{
*dest = '\0';
dest++;
j++;
}
return (pdest);
}
