#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *cap_string(char *k)
{
	int i = 0;
	int j;

	int b[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (k[i] != '\0')
	{
		if (k[i] >= 'a' && k[i] <= 'z')
		{
			if (i == 0)
			{
				k[i] = k[i] - 32;
			}
			else 
			{
				for (j = 0; j <= 12; j++)
				{
					if (b[j] == k[i] - 1)
					{
						k[i] =k[i] - 32;
					}
				}
			}
		}
		i++;
	}

	return(k);
}
			
