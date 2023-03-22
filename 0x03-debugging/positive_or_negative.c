#include "main.h"
/**
 * positive_or_negative - determine if number is positive, negative or zero.
 * @i: number to be checked
 * Return: 0 on success
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
