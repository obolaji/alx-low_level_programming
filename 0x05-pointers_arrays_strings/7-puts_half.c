#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, j, k;
	k = 0;

	while (str [k] != '\0')
	{
		k++;
	}

	if (k % 2 == 0)
	{
		for (i = k / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else  if(k % 2)
	{
		for (j = (k - 1) / 2; j < k; j++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
