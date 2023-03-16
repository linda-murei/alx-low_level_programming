#include <stdio.h>
/**
 * main - main purpose
 * Return: 0 after success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lubyte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lubyte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lubyte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lubyte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lubyte(s)\n", (unsigned long)sizeof(f));
return (0);
}
