#include "main.h"
#include <stdio.h>

/**
* print_sign - prints sign
*
* @n: Receives integer n
*
* Return: Integer 1, 0 and -1
*/

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	else
	{
	_putchar('0');
	return(0);
	}
}
