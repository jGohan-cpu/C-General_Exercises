#include <stdio.h>
#include "main.h"

/*
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
