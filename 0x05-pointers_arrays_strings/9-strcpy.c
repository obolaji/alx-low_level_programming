#include "main.h"

/**
 * *_strcpy - copies the string that src points to
 * @dest: points to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i]= src[i];
	}
	dest[i] = '\0';

	return (dest);
}
