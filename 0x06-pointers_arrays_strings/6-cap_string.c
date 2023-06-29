#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: A pointer to a string
 * Return: a pointer to the result string
 */
char *cap_string(char *str)
{
char arr[] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}', '\0'};
int i = 0, j;
int l = 0;
int is_separator = 0;
if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
i++;
}
while (arr[l] != '\0')
l++;
for (; str[i] != '\0';)
{
is_separator = 0;
for (j = 0; j <= l; j++)
{
if (str[i] == arr[j])
is_separator = 1;
}
if (is_separator == 1)
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] = str[i + 1] - 32;
i = i + 2;
}
else
i++;
}
else
i++;
}
return (str);
}
