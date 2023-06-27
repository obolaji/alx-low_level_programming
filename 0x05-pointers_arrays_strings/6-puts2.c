#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int i, j;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
