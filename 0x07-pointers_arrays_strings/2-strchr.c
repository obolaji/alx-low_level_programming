#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	i = 0;

	if (s[i] == '\0')
		return (s);
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}

