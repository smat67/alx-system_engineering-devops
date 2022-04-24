#include "main.h"

/**
 * -strcmp -function that compares two strings
 *  @s1: First string pointed
 *  @s2: Second string
 *  Return: negative if s1 < s2; 0 if matching and positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')/* excluding the null byte from the string*/
	{
		if (*s1 != *s2)/* if element of arr1 in arr2 are diff, return difference */
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
