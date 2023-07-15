#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: start of range
 * @max: end of range
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int i, j;
	int *al = NULL;

	if (min > max)
		return (NULL);

	i = max - min;

	al = malloc(sizeof(int) * (i + 1));

	if (al == NULL)
		return (NULL);

	for (j = 0; j < i; j++, min++)
		al[j] = min;

	return (al);
}
