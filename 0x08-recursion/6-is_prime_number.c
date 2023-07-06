#include "main.h"
#include <stdio.h>

/**
 * prime - checks if number is prime
 * @i: integer
 * @j: integer
 * Return: Always 0.
 */

int prime(int i, int j)
{
	if (i == j)
		return (1);
	if (i % j == 0)
		return (0);
	return (prime(i, j + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
