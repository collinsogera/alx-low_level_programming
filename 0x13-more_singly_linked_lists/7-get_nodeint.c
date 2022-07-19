#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - Remove first item of list
 *@head: Pointer to first node
 *@index: Number index of list
 *Return: Value of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);
	while (a < index)
	{
		if (head == NULL)
			return (NULL)
			node_index = head->next;
			head = node_index;
			++a;
	}
	return (node_index);
}

