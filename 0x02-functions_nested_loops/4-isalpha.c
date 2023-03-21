#include "main.h"
/**
 * _isalpha - function that checks for alaphabet
 *
 * @c: function parameter
 * Return: 1 if it is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
