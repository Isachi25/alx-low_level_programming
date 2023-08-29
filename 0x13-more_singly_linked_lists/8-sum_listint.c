#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n)
 * in a linked list
 * @head: pointer to the 1st node in the linked list
 *
 * Return: the resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
