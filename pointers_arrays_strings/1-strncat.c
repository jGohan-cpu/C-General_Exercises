#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
    if ((src == NULL) && (dest == NULL)) 
    {
        return NULL;
    }


    for (; dest != '\0'; dest++);

    for (int i = 0; (i < n) && (s2 != '\0'); i++, dest++, src++) 
    {
        dest =src;
    }

    *dest = '\0';
    return (dest);
}
