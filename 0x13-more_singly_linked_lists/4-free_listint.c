#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: ptr to the head of the linked list
 * Return: 0
 */

void free_listint(listint_t *head)
{#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: ptr to the head of the linked list
 * Return: 0;
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
	listint_t *temp;
	listint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
