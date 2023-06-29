#include "main.h"
/**
 * *_strcmp - function that compares two strings.
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: integer represent the difference between ASCII
 * value of the two first diff char between to strings
 * 
 */
int _strcmp(char *s1, char *s2)
{
int as1 = 0 , as2 = 0;
/* char *ps1 = s1;
char *ps2 = s2; */
int res = 0, i = 0;
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 == *s2)
{
s1++;
s2++;
}
else 
break;
}
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i]!=s2[i])
{
as1 = s1[i];
as2 = s2[i]
res = as1 - as2;
break;
}
else
i++;
}
return (res);
}

