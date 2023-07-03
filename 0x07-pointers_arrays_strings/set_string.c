#include "main.h"
#include <stdio.h>

void set_string(char **s, char *to)
{
int i = 0, j = 0, k = 0, l = 0;

while ((*s)[j] != '\0')
j++;
while (to[i] != '\0')
i++;
l = i;
printf("i is %d\n",i);
printf("j is %d\n",j);
while (k < l)
{
k++;
*s = to;
}
while (k < j)
{
(*s)[k] = '\0';
k++;

}

}

int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}