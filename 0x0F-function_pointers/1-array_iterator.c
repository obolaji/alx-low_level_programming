#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function for each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
