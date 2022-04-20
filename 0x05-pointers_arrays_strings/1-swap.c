#include "main.h"

/**
 * swap_int - swaps the values of two integers a and b
 * @a: A pointer to an int updated
 * @b: B pointer to an int updated
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
