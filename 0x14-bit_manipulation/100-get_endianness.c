#include "main.h"

/**
 * get_endianness - checks is a machine is small or
 * big endian
 *
 * Return: 0 (Big), otherwise 1 (Small)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
