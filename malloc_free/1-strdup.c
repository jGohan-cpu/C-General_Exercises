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

	if (dup == NULL)
	{
	return (NULL);
	}

	if (str == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < len ; i++)
	{
	dup[i] = str[i];
	}

	return (dup);
}
