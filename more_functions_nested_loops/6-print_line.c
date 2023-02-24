#include <stdio.h>
#include "main.h"

/**
 *print_lines - print lines
 *@a: receives integer
 */

void print_line(int n)
{
	int i; 

	if (n == 0)
	{
		putchar('\n');
	}

	else
	{
	for (i = 0; i < n; i++)
	{
	putchar('_');
	}

	putchar('\n');
	}
}
