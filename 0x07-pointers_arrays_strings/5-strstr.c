#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared.
 * @haystack: pointer to the source string
 * @needle: pointer to the string to be matched
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;

if (*needle == '\0')
return (haystack);

for (; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
}
return (NULL);
}
