#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: array for dimensions of chessboard
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[j][k]);
		_putchar('\n');
	}
}
