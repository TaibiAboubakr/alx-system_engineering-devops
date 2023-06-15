#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Return1: 1 in Errors
 */
int main(void)
{
char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(m);
write(STDERR_FILENO, m, len);
return (1);
}
