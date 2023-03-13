#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates strings
 * @str: character
 * Return: char
 */

char *_strdup(char *str)
{
	int i;
	int len = strlen(str) + 1;
	char *dup = malloc(len);

	if (str == NULL)
	{
	return (NULL);
	}

	if (dup == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < len ; i++)
	{
	dup[i] = str[i];
	}

	free(dup);

	return (dup);
}
