#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	if (argc != 1)
	{
		for (i = 0 ; i < argc ; i++)
		{
			num = atoi(argv[i]);
			if (isdigit(num))
			{
				sum += num;
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
