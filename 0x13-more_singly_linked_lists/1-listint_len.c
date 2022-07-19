#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - Functions that returns no of elements in a linked list
 *@h: Name of the list
 *Return: No of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h)
		return (1 + listint_len(h->next));
	return (0);
}

