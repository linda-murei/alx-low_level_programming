#include "main.h"
/**
 * set_bit- sets the value of a bit to 1 at a given index
 * @n:pointer to number to be changed
 * @index:index of bit to be set.
 * Return:1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 63)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
