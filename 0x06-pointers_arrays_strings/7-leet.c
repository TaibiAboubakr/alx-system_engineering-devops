#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @str: A pointer to a string
 * Return: a pointer to the result string
 */
char *leet(char *str)
{
int i = 0, j = 0;
char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (; str[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (str[i] == letters[j])
str[i] = number[j];
}
}
return (str);
}
