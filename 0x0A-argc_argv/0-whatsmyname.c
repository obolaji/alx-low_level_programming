#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 **/

int main(int a, char *b[])
{
	int i;

	for (i = 0; i < a; i++)
		printf("%s\n", b[i]);

	return (0);
}
