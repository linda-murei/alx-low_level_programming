#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return: The number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match = 1;

	while (*s && match)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				break;
			a++;
		}

		if (!*a)
			match = 0;
		else
		{
			count++;
			s++;
		}
	}

	return (count);
}

