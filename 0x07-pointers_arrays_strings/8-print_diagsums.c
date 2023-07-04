#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @size: input
 * @a: input
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;
	int i, j;

	for (i = 0; i < size * size; i += (size + 1))
	{
		b += a[i];
	}
	for (j = size - 1; j < size * size; j += (size - 1))
	{
		c += a[j];
	}
	printf("%d, %d\n", b, c);
}
