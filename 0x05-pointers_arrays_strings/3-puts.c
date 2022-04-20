#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int updated
 *
 * Return: void
 */

void _puts(char *str)
{
	char *c;
	int z;

	c = str;

	for (z = 0; c[z]; z++)
	{
		_putchar(c[z]);
	}
	_putchar('\n');
}

	
