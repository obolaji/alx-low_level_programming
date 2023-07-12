#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	newstr = (char *)malloc((i + j + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		newstr[i] = s1[i]
			i++;
	}
	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++, j++;
	}
	return (newstr);
}




