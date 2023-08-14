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
	for(y = 'A'; y <= 'Z'; y++)
    {
        putchar(y);
    }
	putchar('\n');
	return (0);
}
