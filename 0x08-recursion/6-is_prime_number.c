#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * is_prime_recursive- recursive
 * @n: integer number to check
 * Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_recursive(n, n - 1));
}
/**
 * is_prime_recursive- recursive
 * @n: integer number to check
 * @i: integer number to divise
 * Return: 1 if prime, 0 otherwise
*/
int is_prime_recursive(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_prime_recursive(n, i - 1));
}
