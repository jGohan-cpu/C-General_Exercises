#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates strings
 *@s1: first string
 *@s2: second string
 *Return: character
 */

char *str_concat(char *s1, char *s2)
{

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i;
	char *cat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	if (cat == NULL)
	{
		return (NULL);
	}

	cat = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
	{
	cat[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
	cat[len1 + i] = s2[i];
	}

	cat[len1 + len2] = '\0';

	return (cat);
}
