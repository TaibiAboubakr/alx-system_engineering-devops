#include "main.h"
/**
 * _isalpha - check is the character is alphabic
 * @c: The character to check
 *
 * Return:1 if c is alphanumeric.
 * is not alpha, 0 is returned.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
