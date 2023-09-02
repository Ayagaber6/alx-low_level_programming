#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @argc: input value
 * @argv: input array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
