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
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(message);
write(STDERR_FILENO, message, len);
return (1);
}
