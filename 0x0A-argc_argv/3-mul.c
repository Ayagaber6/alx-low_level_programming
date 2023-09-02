#include <stdio.h>
/**
 * main- multiplies two numbers
 * @argc: input value
 * @argv: input array
 * Return 0 or 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	
	a = argv[1];
	b = argv[2];
	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
