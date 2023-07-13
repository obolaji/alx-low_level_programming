#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @a: int
 * @b: char
 * Return: 0
 */

int main(int a, char *b[])
{
	if (a == 1 || a == 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(b[1]) * atoi(b[2]));

	return (0);
}
