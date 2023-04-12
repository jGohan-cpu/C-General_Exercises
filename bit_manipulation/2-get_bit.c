#include "main.h"

/**
 * get_bit - return bit at index
 * @n: number to evaluate
 * @index: index to find
 * Return: binary number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (index > 63)
		return (-1);
	i = ((n >> index) & 1);

	return (i);
}
