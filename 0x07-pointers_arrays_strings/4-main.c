#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "kk";
    char *t;

    t = _strpbrk(s, f);
    if (t != NULL)
    printf("%s\n", t);
    return (0);
}