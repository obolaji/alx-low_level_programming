#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 'a';
	int x = 'A';

	while (n <= 'z')
	{
		putchar(n);
	}
	while (x <= 'Z')
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
