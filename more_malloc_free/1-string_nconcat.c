#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *string_nconcat - 
 *@s1: first string
 *@s2: second string
 *@n: 
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j; 
	unsigned int len1;
	unsigned int len2;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(len1 + (n * sizeof(char) + 1));

		if (ptr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}

		if (n >= len2)
		{
			n = len2; 
		}

		for(j = 0; j < n; j++)
		{
		ptr[i + j] = s2[j];
		}

		ptr[i + j] = '\0';

		return (ptr);
}
