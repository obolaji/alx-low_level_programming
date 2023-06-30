#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - prints reverse array
 * @a - array to be reversed
 * @n - size of array
 *
 * Return:Reversed array
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
