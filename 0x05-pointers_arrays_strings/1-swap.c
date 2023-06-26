#include "main.h"
/**
 * swap_int  -  swaps the values of two integers.
 * and updates the value it points to to 98
 * @a: A pointer to an int
 * @b: A pointer to an int
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
