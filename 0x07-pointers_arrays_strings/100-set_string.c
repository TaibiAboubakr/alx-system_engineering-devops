#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char..
 * @to: pointer to an string
 * @s: pointer to a pointer
 */
void set_string(char **s, char *to)
{
*s = to;
}
