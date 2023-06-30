#include "main.h"
#include <stdio.h>

/**
 * _strncpy- copies a string
 * @dest: destination ofcopied string
 * @src: source of string to be copied
 * @n: integer
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
