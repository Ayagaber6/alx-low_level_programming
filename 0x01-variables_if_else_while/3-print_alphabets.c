#include <stdio.h>
/**
 * main- entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: 0 mean success
 */
int main(void)
{
	int x, y;

	for(x = 'a'; x <= 'z'; x++)
    {
        putchar(x);
    }
	putchar('\n');
	for(y = 'A'; x <= 'Z'; x++)
    {
        putchar(x);
    }
	putchar('\n');
	return (0);
}
