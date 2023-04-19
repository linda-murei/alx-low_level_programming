#include "function_pointers.h"
/**
 * int_index -function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches or size =< 0
 * else returns the index of the first element for which the
 * cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	return (-1);
	for (index = 0; index < size; index++)
	{
	if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
