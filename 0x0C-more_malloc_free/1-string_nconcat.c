#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first char
 * @s2:second char
 * @n: integer
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	char *al = NULL;

	al = malloc((i + n + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for ( ; s1[i] != '\0'; i++)
		;

	for ( ; s2[j] != '\0'; j++)
		;

	if (j <= n)
		n = j;

	if (al == NULL)
		return (NULL);

	for ( ; s1[k] != '\0'; k++)
		al[k] = s1[k];

	for (k = 0; k < n; k++)
		al[k + i] = s2[k];

	al[k + i] = '\0';
	return (al);
}




