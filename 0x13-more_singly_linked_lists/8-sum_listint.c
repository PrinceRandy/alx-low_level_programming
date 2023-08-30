#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the
 * data (n) of a linked list
 * @head: pointer to the head of the list
 * @Return: sum of all the data(n)
 * or zero if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
