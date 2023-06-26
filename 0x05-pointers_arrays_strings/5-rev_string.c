#include "main.h"
#include <stdlib.h>
/**
 * rev_string - reverse a string,.
 * @s: A pointer to a string
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char t;
int l = 0;
while (*end != '\0')
{
l++;
end++;
}
end--;
while (start < end)
{
t = *start;
*start = *end;
*end = t;
start++;
end--;
}
}
