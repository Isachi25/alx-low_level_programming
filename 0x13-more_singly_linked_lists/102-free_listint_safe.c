#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the 1st node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff = -1;
	listint_t *temp, *current;

	if (!h || !*h)
		return (0);

	while (*h && diff != 0)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			current = *h;
			*h = NULL;
			len++;

			while (current->next != current)
			{
				temp = current->next;
				current->next = NULL;
				current = temp;
				len++;
			}
			break;
		}
	}

	*h = NULL;

	return (len);
}
