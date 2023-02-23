#include "main.h"
#include <stdio.h>

/**
 * time_table - prints time table
 * Return: Void
 */

void times_table(void)
{

	int a;
	int b;

	for(a = 0; a <= 9; a++)
	{
		for(b = 0; b <= 9; b++)
		{
			int c = a * b;
			
			if(c > 9)
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');

				if(b != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}

			else
			{
			putchar(c + '0');

			if(b != 9)
			{
			putchar(',');
			putchar(' ');
			putchar(' ');
			}
			}	
			
		}
		putchar('\n');
	}
}
