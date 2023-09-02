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
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!isdigit(argv[i])
			{
				num = atoi(argv[i]);
				sum += num;
				return (sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
