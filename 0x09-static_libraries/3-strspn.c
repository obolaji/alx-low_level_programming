#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: first value
 * @accept: second value
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, k = 0;
	unsigned int j = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
				j++;
			k++;
		}
		i++;
		k = 0;
	}
	return (j);
}
