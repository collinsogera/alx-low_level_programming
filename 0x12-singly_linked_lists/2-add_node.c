#include "lists.h"

/**
 *_strlen - Length of string
 *@s: string
 *Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 *add_node - Adds new node at the beginning of list_t
 *@head: head of linked list
 *@str: String to be used as data for node
 *Return: Number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	lisr_t *new;
	char *string;
	int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);

}

