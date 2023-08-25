#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all elements of a list_t
 * @h: pointer to the list_t list to be printed
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		a++;
	}
	return (a);
}
