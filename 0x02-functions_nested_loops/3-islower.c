#include "main.h"
/**
 * * _islower - checks if it is a lowercase character
 * @c: contains character to be compared
 *
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
