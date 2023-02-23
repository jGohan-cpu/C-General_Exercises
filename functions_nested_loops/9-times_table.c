#include "main.h"
#include <stdio.h>

/**
 * time_table - prints time table
 * Return: Void
 */

void times_table(void)
{
	int num, mult, prod;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
