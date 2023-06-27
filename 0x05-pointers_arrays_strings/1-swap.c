#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: points to the first value
* @b: points to the second value
*/

void swap_int(int *a, int *b)
{
	int swch = *a;
	*a = *b;
	*b = swch;
}
