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
while (*src && n > 0)
{
*dest++ = *src++;
n--;
}
while (n > 0)
{
*dest++ = '\0';
n--;
}
return (p_dest);
}
