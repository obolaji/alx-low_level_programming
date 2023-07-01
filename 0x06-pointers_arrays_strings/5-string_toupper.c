#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - change lowercase to uppercase
 * @k: string to process
 *
 * Return: String with only uppercase letters
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
