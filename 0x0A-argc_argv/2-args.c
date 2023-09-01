#include <stdio.h>
/**
 * main- print all arguments
 * @i: counter
 * @argc: input value
 * @argv: input array
 * Return: 0 success
 */
int main(int i, int argc, char *argv[])
{

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}
