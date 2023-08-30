#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a linked list.
 * @h: A pointer to a listint_t linked list
 *
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
