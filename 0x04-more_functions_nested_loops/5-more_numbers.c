#include "main.h"

/**
 * more_numbers - Prints 10 times numbers 0 to 14
 * followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
