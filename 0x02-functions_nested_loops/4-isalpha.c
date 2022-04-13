#include "main.h"
/**
 * _isalpha - check a character if it is alphabet.
 * *@c: The int to print
 *
 * Return: 1 when a character  is a letter, lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
