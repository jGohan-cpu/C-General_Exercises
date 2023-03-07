#include <stdio.h>
#include "main.h"

/**
 * factorial - factial of a number
 * @n: receives int
 * Return: integer
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (n * factorial(n - 1));

}
