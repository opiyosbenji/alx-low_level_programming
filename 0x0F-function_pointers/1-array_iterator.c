#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter
 * @array: parameter values to be passed to action
 * @size: length of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
