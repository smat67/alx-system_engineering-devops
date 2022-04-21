#include "main.h"
/**
 * times_table -prints 9 times table starting from 0.
 * Return: void
 */

void times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			prod = (num * multi);
			if (prod != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			}
			else
				if (prod < 10 && multi != 0)
				{
					_putchar(',');
					_putchar((prod % 10) + '0');
				}
				else
					_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
