#include "function_pointers.h"
/**
 * array_iterator - function with 3 arguments
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
