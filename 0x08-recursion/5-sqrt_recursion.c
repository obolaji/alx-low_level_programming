#include "main.h"
#include <stdio.h>


/**
 * sqrt - calculate root
 * @i: number that iterates
 * @j: integer
 *
 * Return: Always 0.
 */

int sqrt1(int i, int j)
{
	int sqrt = i * i;

	if (sqrt == j)
		return (i);
	else if (sqrt > j)
		return (-1);
	return (sqrt1(j, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
        return (sqrt1(n, 1));
}
