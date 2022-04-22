#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *)
{
	int x;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		s[x] = s[x] - 32;
		x++;
	}
	return (s);
}
