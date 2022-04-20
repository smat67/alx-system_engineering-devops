#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an in updated
 * Return: void
 */

int _strlen(char *s)
{
	int y;

	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}
