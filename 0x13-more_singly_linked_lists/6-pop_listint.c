#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	node = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (node);
}
