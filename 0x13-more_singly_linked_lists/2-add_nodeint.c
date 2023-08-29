#include "lists.h"

/**
 * add_nodeint - Add s a new node at the beginning of a linked list
 * @head: pointer to the 1st node in the list
 * @n: data to insert in that new node
 *
 * Return: A new node (success), otherwise null if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
