#include "lists.h"

/**
 * add_node - add new node at the begining
 * @head: head of the linked list
 * @str: string to be in the list
 *
 * Return: address of the head
 */

list_t *add_number(list_t **head, const char *str)
{
	list_t *new;
	size_t newchar;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	
	for (newchar = 0; str[newchar]; newchar++)
		;
	
	new->len = newchar;
	new->next = *head;
	*head = new;
	
	return (*head);
}
