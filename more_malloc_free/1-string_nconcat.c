#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concenates string
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int
 * Return: conc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= s2_len)
	{
	    n = s2_len;
	}

	result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
	    return (NULL);
	}

	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
