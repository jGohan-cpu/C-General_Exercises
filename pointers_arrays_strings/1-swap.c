#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps integer
 *@a: receives int
 *@b: receives int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
