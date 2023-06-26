#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: A pointer to a string
 * Return: Lenth of string
 */
void _puts(char *str)
{
char *str1[] = *str;
int l=0, i=0;
while (*str != '\0')
{
str++;
l++;
}

for (i=0; i < l; i++){
printf("%s",str);
_putchar(str[i]);
}
_putchar('\n');
}
