#include "main.h"

/**
 * -strcmp -function that compares two strings
 *  @s1: First string pointed
 *  @s2: Second string
 *  Return: negative if s1 < s2; 0 if matching and positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int w = 0, x = 0, y = 0, z = 0, limi;

	while (s1[w])
	{
		w++;
	}
	while (s2[x])
	{
		x++;
	}
	if (w <= x)
	{
		limi = w
	}
	else
	{
		limi = x;
	}
	while (y <= limi)
	{
		if (s1[y] == s2[y])
		{
			y++;
			continue;
		}
		else
		{
			z = s1[y] - s2[y];
			break;
		}
		y++;
	}
	return (z);
}
