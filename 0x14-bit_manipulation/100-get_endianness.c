#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *b;

	k = 1;
	b = (char *)&k;

	return (*b);
}
