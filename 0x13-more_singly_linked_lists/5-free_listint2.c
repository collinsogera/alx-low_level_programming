#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - Free list
 *@head: Pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
