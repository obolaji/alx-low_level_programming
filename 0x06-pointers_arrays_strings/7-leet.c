#include "main.h"
#include <stdio.h>

/**
 * leet - encode with 1337
 * @k: input to be encoded
 * Return: value of k
 */

char *leet(char *k)
{
	int i = 0;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (k[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (k[i] == a[j])
			{
				k[i] = b[j];
			}
		}
		i++;
	}
	return (k);
}
