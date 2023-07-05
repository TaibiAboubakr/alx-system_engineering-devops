#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @x: integer number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
if (n < 0)
return (-1);

return (_sqrt(n, n - 1));
}
/**
 * _sqrt- recursive for _sqrt_recursion
 * @n: integer number to check
 * @i: integer number to divise
 * Return: 1 if prime, 0 otherwise
*/
int _sqrt(int n, int i)
{
if (i == 1 )
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i - 1));

}

