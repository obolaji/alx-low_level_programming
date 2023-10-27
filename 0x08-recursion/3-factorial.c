#include "main.h"
#include "stdio.h"

/**
 * factorial - returns the factorial of a given number.
 * factorial - returns the factorialof a given number
 * @n: given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
