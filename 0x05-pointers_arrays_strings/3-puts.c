#include "main.h"

/**
 * _puts - prints out a string with newline
 * @str: string which is to be printed
 *
 * Return: (void)
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putschar(*str);
str++;
}
_putchar('\n');
}
