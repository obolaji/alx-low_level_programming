#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: string to be found
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a  == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}

