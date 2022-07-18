#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list.
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
		new++;
		h = h->next;
	}
	return (new);
}
