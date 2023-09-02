#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- adds positive numbers
 * @argc: input value
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	for (i = 1 ; i < argc ; i++)
	{
		num = atoi(argv[i]);
		if (argv[i] >= 0)
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}
