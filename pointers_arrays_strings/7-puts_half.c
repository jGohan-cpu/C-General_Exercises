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
	int half = len / 2;

	for (i = half; str[i] != '\0'; i++)
	{
			putchar(str[i]);
	}

	putchar('\n');
}
