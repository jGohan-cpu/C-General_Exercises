#include "main.h"

/**
 *_puts - function that print strings
 *@str: receives character
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
