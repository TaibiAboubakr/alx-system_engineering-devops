#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: A pointer to a string
 */
void puts_half(char *str)
{
char *st = str;
int l = 0, h = 0, i;
while (*st != '\0')
{
l++;
st++;
}
if (l % 2 == 0)
{
h = l / 2;
for (i = h; i < l; i++)
_putchar(str[i]);
}
else
{
h = (l - 1) / 2;
for (i = h + 1; i < l; i++)
_putchar(str[i]);
}
_putchar('\n');
}
