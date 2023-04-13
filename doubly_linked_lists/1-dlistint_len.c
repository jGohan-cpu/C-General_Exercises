#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Return number of elements
 * @h: Pointer to struct
 * Return: Amount of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}