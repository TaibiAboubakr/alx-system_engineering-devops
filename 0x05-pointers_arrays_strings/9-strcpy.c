#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: pointer to a string
 * @dest: pointer to a buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *p_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p_dest);
}
