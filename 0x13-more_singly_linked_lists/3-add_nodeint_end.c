#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - Add node at end of list
 *@head: Beginning
 *@n: Number
 *Return: Node atend
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *pointer;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	pointer = *head;
	while (pointer->next)
		pointer = pointer->next;
	pointer->next = add;
	return (add);
}

