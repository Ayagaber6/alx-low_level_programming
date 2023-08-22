#include "main.h"
/**
 * main- entry point
 *
 * Description: copy data from file to other
 * @dest: pointer
 * @src: pointer
 * Return: data of file
 */
char *_strcpy/*copy from file to other*/(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		*dest[i] = *src[i];
	}
	return (dest);
}
