#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: ptr to a ptr head of linked list
 * @str: string pointer
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
