#include "main.h"

/**
 * is_palindrome - returns 1 if a string is palindrome, 0 otherwise
 * is_prime_recursive- recursive
 * @s: pointer to string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
_strlen_rec(s);
return (_is_palindrome(s, s + (_strlen_rec(s) - 1), (_strlen_rec(s)), 0));
}
/**
 * _strlen_rec -  returns the length of a string
 * @sl: pointer to a string
 * Return: length of a string
 */

int _strlen_rec(char *sl)
{
if (*sl == '\0')
return (0);
sl++;
return (1 + _strlen_rec(sl));
}
/**
 * _is_palindrome- recursive
 * @len: len of string
 * @l: integer number to check
 * @starts: pointer to string
 * @ends: pointer to end of string
 * Return: 1 if palindrome, 0 otherwise
 */
int _is_palindrome(char *starts, char *ends, int len, int l)
{

if (*starts == *ends && *starts != '\0')
{
starts++;
ends--;
return (_is_palindrome(starts, ends, len, l + 1));
}
if (*starts != *ends)
return (0);

return (1);

}
