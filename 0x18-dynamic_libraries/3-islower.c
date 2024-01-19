#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 *@c: The character being checked.
 * Return: 1 for lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
