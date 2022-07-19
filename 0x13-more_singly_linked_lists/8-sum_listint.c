#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - Sum values of the list
 *@head: Pointer to first node
 *Return: Value of node index
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
