#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: The pointer to the number being changed
 * @index: The index of the bit set to 1
 *
 * Return: 1 (Success), otherwise -1(Fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
