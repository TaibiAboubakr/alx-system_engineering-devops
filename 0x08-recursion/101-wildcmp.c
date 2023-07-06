#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: 1 is strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (0);
return (1);
}
