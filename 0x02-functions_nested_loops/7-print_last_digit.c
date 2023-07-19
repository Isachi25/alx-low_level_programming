#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: The number being checked
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
