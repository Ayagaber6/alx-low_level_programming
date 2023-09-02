#include <stdio.h>
/**
 * main- multiplies two numbers
 * @argc: input value
 * @argv: input array
 * Return 0 or 1
 */
int main (int argc, int argv[])
{
	if (argc != 3)
	{
		printf ("Error");
		return (1);
	}
	int i = 0;

	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
