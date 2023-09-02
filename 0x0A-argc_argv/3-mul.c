#include <stdio.h>
/**
 * main- multiplies two numbers
 * @argc: input value
 * @argv: input array
 * Return 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i <= argc ; i++)
	{
		if (argc == 3)
		{
			printf("%d\n", argv[1] * argv[2]);
		}
		else
		{
			printf("Error");
			return (1);
		}
		return (0);
	}
}
