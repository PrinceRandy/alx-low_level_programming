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
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
	return (NULL);

	return (head);
}
