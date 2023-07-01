#include "main.h"
#include <stdio.h>

/**
 * rot13 - change letters with rot13 system
 * @k: input value
 * Return: k which is the resulting value.
 */

char *rot13(char *k)
{
	int i = 0;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (k[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (k[i] == a[j])
			{
				k[i] = arot[j];
				break;
			}
		}
		i++;
	}
	return (k);
}
