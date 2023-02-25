#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - prints diagnoal line
 *@n: receives int
 */

void print_diagonal(int n)
{

	int a, b, c;

	if (n == 0)
	{
		putchar('\n');
	}

	else
	{

		for (a = 0; a <= n; a++)
		{
			for (b = 1; b < n + 1; b++)
			{
				putchar(' ');
			}

			for (c = 0; c < n; c++)
			{
				putchar(92);
				putchar('\n');
			}

		}
	}
}
