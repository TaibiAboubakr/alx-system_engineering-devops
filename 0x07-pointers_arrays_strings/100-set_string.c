#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char..
 * @to: pointer to an string
 * @s: pointer to a pointer
 */
void set_string(char **s, char *to)
{
int i = 0, j = 0, k = 0, l;
while ((*s)[j] != '\0')
j++;
while (to[i] != '\0')
i++;
l = i;
if (j >= i)
{
for (k = 0; k < l ; k++)
{
*s = to;
}
}
/* (*s)[j]='\0'; */
}
