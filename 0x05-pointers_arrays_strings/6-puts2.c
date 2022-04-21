#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str - A pointer to an int updated
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
