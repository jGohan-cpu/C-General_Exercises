#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - prints time
 *Return: returns void
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for(a = '0'; a <= '2'; a++)
	{
		for(b = '0'; b <= '4'; b++ )
		{
				for(c = '0'; c <= '5'; c++)
				{
					for(d = '0'; d <= '9'; d++)
					if (a <= '2' && b <= '' )
					{	
					{
						putchar(a);
						putchar(b);
						putchar(':');
						putchar(c);
						putchar(d);
						putchar('\n');
					}
					}
				}
		}
}
}
