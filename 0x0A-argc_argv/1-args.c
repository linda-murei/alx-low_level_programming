#include "main.h"
#include<stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s/n", argv[j]);
	return (0);
}

