#include "main.h"
/**
 * factorial - function that prints a factorial of a num.
 * @n: input num.
 * Return: if n is less than 0, -1 to indicate error
 * if n is > 0 factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}
