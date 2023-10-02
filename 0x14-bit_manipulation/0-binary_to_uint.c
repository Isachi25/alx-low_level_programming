#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: unsigned int, else return 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b || *b == '\0')
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		if (*b == '1')
			num += 1;

		b++;
	}
	return (num);
}
