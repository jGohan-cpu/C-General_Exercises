#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - returns length
 *@s: character pointer
 *Return: integer
 */

int _strlen_recursion(char *s)
{

	int i = 0;

	if(*s != '\0')
	{
	_strlen_recursion(s + 1);
	}

	else
	{
	return (1);
	}

}
