#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: new array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);

	j = (max - min);
	p = malloc((j + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++, min++)
		p[i] = min;

	return (p);
}


