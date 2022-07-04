#include <stdio.h>

/**
 * main - prints digits starting < 10, followed by a new line.
 *
 * Return: f(success)
 */
int main(void)
{
int n = 0;
for ( ; n < 10 ; n++)
{
printf("%i", n);
}
putchar('\n');
return (0);
}
