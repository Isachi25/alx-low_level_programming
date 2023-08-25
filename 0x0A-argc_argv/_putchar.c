#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 (Success)
 * Uppon error, return -1 with errno set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
