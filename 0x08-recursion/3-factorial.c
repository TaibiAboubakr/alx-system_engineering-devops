#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: pointer to a string
 * Return: length of a string
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n ==  0 || n == 1)
return (1);

if (n > 1)
return (n * factorial(n - 1));

return (0);
}
