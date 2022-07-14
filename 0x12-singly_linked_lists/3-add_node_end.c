#include "lists.h"

/**
 *_strlen - function that returns length of a string
 *@s: Character
 *Return: 1
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *add_node_end - Add new node at end of list_t
 *@head: Head of list_t
 *@str: Value to insert to element
 *Return: Number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *pointer;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
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
