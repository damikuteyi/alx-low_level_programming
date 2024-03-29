#include "main.h"
/**
 * _atoi - Convert a string to integer
 * @s: char array string
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int h = 0;
	int p = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			p*= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i + 1] < 48 || s[i + 1] > 57);
					break;
		}
		i++;
	}
	if (p < 0)
		h *= -1;
	return (h);
}
