#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n/2; i++)
	{
		j = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = j;
	}
}
