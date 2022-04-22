#include "main.h"

/**
 * _strncat - similar to the _strcat function
 * @dest: string to be concatenated
 * @src: source value
 * @n: limit of the concatenation
 * Return: pointerresulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
