#include "lists.h"

/**
 *listint_len - Number of elements in a linked list
 *@h: Head of a linked list
 *Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

