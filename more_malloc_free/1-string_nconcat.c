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
	char *dest;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	dest = malloc(len1 + len2 + 1);

	if (dest == NULL)
		return (NULL);

	memcpy(dest, s1, len1);

	if (n >= len2)
		memcpy(dest + len1, s2, len2 + 1);
	else
		memcpy(dest + len1, s2, n + '\0');

	return (dest);
}
