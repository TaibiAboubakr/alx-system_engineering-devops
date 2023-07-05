#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer number
 * Return: natural square root of a number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (_sqrt(n, 1));
}
/**
 * _sqrt- recursive for _sqrt_recursion
 * @n: integer number to get your square root
 * @i: integer number for check
 * Return: natural square root of n , -1 otherwise
*/
int _sqrt(int n, int i)
{
if (i == n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));

}

