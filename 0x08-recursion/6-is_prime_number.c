#include "main.h"
#include <stdio.h> 

/**
 * is_prime_number - checks if given number is prime
 * @n: integer
 * Return: Success.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 1 || n <= 0)
		return (0);
	if (n % i == 0)
	{
		return(0);
	}
		i++;
	else if (n == i)
		return (1);

}
