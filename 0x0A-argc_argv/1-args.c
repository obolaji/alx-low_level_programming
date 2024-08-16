#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: integer
 * @argv: vector
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
