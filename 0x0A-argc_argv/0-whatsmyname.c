#include<stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return:0
 */
int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);

}
