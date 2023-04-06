#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located.
 * Return:if substring is located - pointer to the beginning of the needle
 * if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
