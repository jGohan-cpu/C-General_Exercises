#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number
 * @n: receives integer
 * Return: integer
 */

void print_to_98(int n)
{
	int i;

	if(n => 98)
	{
		for(i = n; i >= 98; i--)
		{
		printf("%d, ", i);
		}

	else
	{
	for(i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
