#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words
 * @str: receives character
 * Return: character
 */

char *cap_string(char*str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{


