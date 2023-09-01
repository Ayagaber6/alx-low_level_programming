#include <stdio.h>
/**
 * main- print all arguments
 * @argc: input value
 * @argv: input array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i <= '\0' ; i++)
	{
		printf("%s\n", *argv[i]);
	}
	printf("\n");
	return (0);
}
