#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *list_len - Return the numbers of elements
 *@h: pointer pointing to the linked list
 *Return: Number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
	h = h->next;
	}

	return (n);
}
