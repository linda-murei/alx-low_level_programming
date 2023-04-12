#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -function that returns a pointer.
 * @str: input function
 * Return: NULL if str = NULL
 * On success returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ddd;
	int k, j = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	ddd  = malloc(sizeof(char) * (k + 1));
	if (ddd == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)

		ddd[j] = str[j];

	return (ddd);
}
