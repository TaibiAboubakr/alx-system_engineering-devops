#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the source string
 * @accept: pointer to the string containing the characters to be matched
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
