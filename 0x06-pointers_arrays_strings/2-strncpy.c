#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
