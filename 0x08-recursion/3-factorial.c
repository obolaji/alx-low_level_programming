#include "main.h"
#include <stdio.h>

/**
 * factorial - The factorial of a given number
 * @n: integer
 * Return: Success.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
