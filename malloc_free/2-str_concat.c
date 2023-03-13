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
	int j;
	char *cat = malloc(len1 + len2 + 1);

	if (s1 == NULL || s2 == NULL)
        {
        return (NULL);
        }

	if (cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
	cat[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
	cat[i + j] = s2[j];
	}

	cat[i + j] = '\0';

	return (cat);
}
