#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - creating new node
 *
 * @head: double pointer
 * @str: pointer to string
 *
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int a;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
	}

	node->len = a;
	node->next = *head;
	*head = node;

	return (node);
}
