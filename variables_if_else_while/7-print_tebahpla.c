#include <stdio.h>

/**
 * main - Prints reversed alphabet
 *
 * Return 0 to indicate successful execution
 */


int main(void)
{

	char i;

	for (i = 'z'; i >= 'a' ; i--)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);

}
