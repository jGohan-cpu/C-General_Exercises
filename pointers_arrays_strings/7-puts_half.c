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
	int len = strlen(str);
	
	if (len % 2 == 0)
	{
	len = len / 2;
	}

	else
	{
	len = (len - 1) / 2;
	}

	for (i = len; str[i] != '\0'; i++)
	{
			putchar(str[i]);
	}

	putchar('\n');
}
