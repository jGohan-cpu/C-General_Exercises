#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half - half of string
 *@str: receives
 */

void puts_half(char *str)
{

	int i;
	int a;

	for (a = 0; str[a] != '\0';)
	{
		a++;
	}

	if (a % 2 == 0)
	{
	a = a / 2;
	}

	else
	{
	a = (a + 1) / 2;
	}

	for (i = a; str[i] != '\0'; i++)
	{
			putchar(str[i]);
	}

	putchar('\n');
}
