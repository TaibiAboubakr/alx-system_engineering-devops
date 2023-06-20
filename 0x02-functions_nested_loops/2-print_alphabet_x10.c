#include "main.h"
/**
 ** print_alphabet_x10 - print all alphabet in lowercase ten times
 **/
void print_alphabet_x10(void)
{
char i;
int j;
for (i = 0; j <= 9; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
