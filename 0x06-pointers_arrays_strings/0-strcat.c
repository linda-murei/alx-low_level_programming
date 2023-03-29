#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return:destination string
 */



char *_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0; destlen != '\0'; i++)
		destlen++;
	for (i = 0; srclen != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen i++)
		dest[destlen + i] = src[i];
	return (dest);
}
