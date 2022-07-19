#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - Insert new node at given position
 *@head: Pointer to first node of list
 *@idx: Index of list
 *@n: Value of number
 *Return: Value of node index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 1;
	listint_t *index_node = *head;
	listint_t *insert;
	listint_t *h = *head;

	if (head == NULL)
		return (NULL);

	while (a < idx)
	{
		index_node = (*head)->next;
		*head = index_node;
		++i;
	}
	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
		return (NULL);
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else
	{
		insert->next = (*head)->next;
		(*head)->next = insert;
		*head = h;
	}
	return (insert);
}
