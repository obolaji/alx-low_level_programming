#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: the pointer
 * @b: constant byte
 * @n: represents the bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
