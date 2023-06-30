#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *string_toupper(char *k)
{
	int i;
	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] >= 'a' && k[i] <= 'z')
		k[i] = k[i] - 32;
	}
	return (k);
}
