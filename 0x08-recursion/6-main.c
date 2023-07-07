#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("for 1 : %d\n", r);
    r = is_prime_number(1024);
    printf("for 1024 : %d\n", r);
    r = is_prime_number(16);
    printf("for 16 : %d\n", r);
    r = is_prime_number(17);
    printf("for 17 : %d\n", r);
    r = is_prime_number(25);
    printf("for 25 : %d\n", r);
    r = is_prime_number(-1);
    printf("for -1 : %d\n", r);
    r = is_prime_number(113);
    printf("for 113 : %d\n", r);
    r = is_prime_number(7919);
    printf("for 7919 : %d\n", r);
    return (0);
}