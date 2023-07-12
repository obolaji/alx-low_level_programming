#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: the size of the memory
 * @c: char value
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ar = NULL;
	unsigned int k;

	ar = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ar != NULL)
	{
		for (k = 0; k < size; k++)
			ar[k] = c;
	}
	return (ar);
}

