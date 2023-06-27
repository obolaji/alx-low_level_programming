#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: length of string
*/

int _strlen(char *s)
{
	int slength = 0;

	while (*s != '\0')
	{
		slength++;
		s++;
	}
	return (slength);
}
