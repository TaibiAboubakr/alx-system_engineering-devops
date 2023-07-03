#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to the source string
 * @accept: pointer to the string containing the characters to be matched
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int j = 0;
while (*s != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
s = NULL;
return (s);
}
