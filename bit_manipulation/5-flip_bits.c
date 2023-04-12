#include "main.h"

/**
 * flip_bits - count how many times you flip
 * @n: first number
 * @m: second number
 * Return: the amount of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int a1 = (n & 1);
	int a2 = (m & 1);

	while (n > 0 || m > 0)
	{
		if (a1 != a2)
			i++;

		n >>= 1;
		m >>= 1;
	}
	return (i);
}
