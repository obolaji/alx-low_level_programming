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
		n++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
