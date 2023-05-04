#include "main.h"
/**
 * binary_to_uint -converts a binary number to
 * unsigned int
 * @b:pointer to string with binary number
 * Return: the converted number or 0 if there is one or
 * more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);

}
