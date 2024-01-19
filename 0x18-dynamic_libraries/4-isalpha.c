#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: character being checked
 * Return: 1 if c is an alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
