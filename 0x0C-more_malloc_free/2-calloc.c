#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an arry
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pointer to array
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, j;


	if (nmemb == 0 || size == 0)
		return (NULL);
	i = (nmemb * size);
	p = malloc(i);
	if (p == NULL)
		return (NULL);
	for (j = 0;  j < i; j++)
		p[j] = 0;
	return (p);
}
