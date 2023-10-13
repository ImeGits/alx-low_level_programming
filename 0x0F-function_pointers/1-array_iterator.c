#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a parameter on each elememt of an array.
 * @array: array of a parameter.
 * @size: size of the array.
 * action: finction as a parameter.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (p = 0; p < size; p++)
	{
		(*action)(array[p]);
	}
}
