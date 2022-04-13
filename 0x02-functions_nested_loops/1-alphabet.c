#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: 0 always
 */
void print_letter(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
