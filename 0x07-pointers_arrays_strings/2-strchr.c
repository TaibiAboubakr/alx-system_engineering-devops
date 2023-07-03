#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: pointer to the source string
 * @n: number of bytes to copy from memory area src to memory area dest
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

for (;;)
{
if (*s == c)
break;

else if (*s != c && *s != '\0')
s++;
else if (*s == '\0')
{
s = NULL;
break;
}
}
return (s);
}
