#include <stdio.h>
#include "main.h"

/**
 *puts2 - puts 2
 *@str: receives pointer
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
