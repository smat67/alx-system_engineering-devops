#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);
	int length =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (length);
	*dest = *cat;

	return (cat);
}

