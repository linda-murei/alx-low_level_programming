#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates sum of all its parameters.
 * @n:number of arguments
 * Return:sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
