#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: parameter to be checked
 * Return: 1(Success), Otherwise 0(Fail)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
