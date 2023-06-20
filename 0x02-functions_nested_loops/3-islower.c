#include "main.h"
/**
 * _islower - check is the character is lower
 * @c: The character to check
 *
 * Return: On success 1.
 * is not lower, 0 is returned.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
