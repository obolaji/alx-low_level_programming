#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two integers
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mul = i * j;

	printf("%d\n", mul);

	return (0);
}
