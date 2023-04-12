#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input one.
 * @s2: input two.
 * Return: if NULL, empty string else concat of S1 and S2
 */
char *str_concat(char *s1, char *s2)
{
	char *ccc;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	{
		i = j = 0;
	}
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ccc = malloc(sizeof(char) * (i + j + 1));
	if (ccc == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		ccc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ccc[i] = s2[j];
		j++, ccc++;
	}
	ccc[i] = '\0';
	return (ccc);
}
