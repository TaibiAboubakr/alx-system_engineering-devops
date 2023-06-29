#include "main.h"
/**
 * *_strcat -  appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: pointer to a string
 * @dest: pointer to a buffer
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
char *p_dest = dest;
int l = 0;
while (*dest != '\0')
{
l++;
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p_dest);
}
