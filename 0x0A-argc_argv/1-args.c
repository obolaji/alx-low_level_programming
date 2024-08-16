#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: integer
 * @argv: vector
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
