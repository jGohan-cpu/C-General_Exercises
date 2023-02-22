#include <stdio.h>

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * 
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');
}
