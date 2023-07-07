#include "main.h"
/**
 * *_strcmp - function that compares two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 0 if the two string are identical or number represent the difference
 * between ASCII value of the two first difference char between to strings
 */
int _strcmp(char *s1, char *s2)
{
int as1 = 0, as2 = 0;
int res = 0, i = 0;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] == s2[i])
{
as1 = s1[i];
as2 = s2[i];
res = as1 - as2;
}
else if (s1[i] != s2[i])
{
as1 = s1[i];
as2 = s2[i];
res = as1 - as2;
break;
}
}
return (res);
}

