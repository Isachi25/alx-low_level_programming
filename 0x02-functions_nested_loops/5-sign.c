#include "main.h"
/**
 * print_sign - A function that prints the sign of a number.
 * @n: The number being checked
 * Return: 1 for positive number, -1 for negative nnumber or 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
