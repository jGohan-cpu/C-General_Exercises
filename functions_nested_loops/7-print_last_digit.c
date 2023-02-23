#include "main.h"
#include <stdio.h>

/**
 *print_last_digit - prints last digit of number
 *@c: receives int
 *Return: returns int
 */

int print_last_digit(int c)
{
	int last = (c % 10);

	if (last < 0)
	{
	last = last * -1;
	}

	_putchar('0' + last);
	return (last);
}
