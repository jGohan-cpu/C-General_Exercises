#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new node at the end
 * @head: pointer to another pointer
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int a;

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
	node->next = NULL;

		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			temp = *head;
			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = node;
		}
	return (node);
}
