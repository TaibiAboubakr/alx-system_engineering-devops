#include "main.h"
/**
 * *string_toupper - reverses the content of an array of integers.
 * @str: A pointer to a string
 * Return: a pointer to the upper string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0';)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
i++;
}
else
i++;
}
return (str);
}
