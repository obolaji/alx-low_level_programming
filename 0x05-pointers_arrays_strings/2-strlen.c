#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
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
