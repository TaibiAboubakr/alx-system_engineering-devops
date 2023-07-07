#include "main.h"
/**
 * *_strncat - Write a function that concatenates two strings
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: pointer to a string
 * @dest: pointer to a buffer
 * @n: integer represent the number of bytes of src to concatenate with dest
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p_dest = dest;
int l = 0, i = 0;
while (*dest != '\0')
{
l++;
dest++;
}
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (p_dest);
}
