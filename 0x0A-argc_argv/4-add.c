#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of the program
 * @a: int
 * @b: char
 * Return: 0
 */

int main(int a, char *b[])
{
	int i, j;
	int k = 0;

	if (a < 2)
	{
		printf("0\n");
	}

	if (a > 1)
	{
		for (i = 1; i <= (a - 1); i++)
		{
			k = k + atoi(b[i]);
			for (j = 0; b[i][j] != '\0'; j++)
			{
				if (b[i][j] < '0' || b[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", k);
	}
	return (0);
}
