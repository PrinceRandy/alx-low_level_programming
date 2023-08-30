#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node in
 * a linked list
 * @index: index of the node to find
 * @head: pointer to head of list
 * Return: pointer to wanted node or Null if no
 * existence of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *b = head, *f;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (b->next == NULL)
			return (NULL);
		f = b->next;
		b = f;
	}
	return (b);
}
