#include "main.h"
#include <stdio.h>
/**
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < size; j++)
			{
				if(j <= i)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
