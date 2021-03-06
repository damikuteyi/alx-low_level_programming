#include "stdio.h"
#define NULL 0
/**
 * _strstr - locate and return pointer to first occurrence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurrence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		a = 0;
		p = haystack;
		do {
			a++;
			p++;
			if (needle[a] == '\0')
				return (haystack);
		} while (*p == needle[a]);
	}
	return (NULL); /* No match*/
}
