#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

void print_array(int *a, int n)
{

	for (n = 0; a[n] <= '\0'; n++)
	{
		putchar(a[n]);

		if (a[n] != '\0')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
