#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s/n, "negative");
	}
	else if (n == 0)
	{
		printf("%d is %s/n, "positive");
	}
	else
	{
		printf(%d is %s/n, "zero");
	}
	return (0);
}
