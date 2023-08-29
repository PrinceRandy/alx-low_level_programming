/* header */
#include "lists.h"

/**
 * listint_len - this counts the number of nodes
 * present in a linked lists
 * @h: The head of the list.
 * Return: This returns the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
