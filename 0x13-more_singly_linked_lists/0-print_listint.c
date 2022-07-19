#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - Prints all elements of a list
 *@h: name of the list
 *Return: List elements
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
