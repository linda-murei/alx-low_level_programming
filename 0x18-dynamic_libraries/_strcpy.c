#include "main.h"

/**
 * _strcpy - copies a string to a destination buffer
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';  /* Null-terminate the destination string */
	return (dest);
}

