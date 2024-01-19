#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The numerator
 * @b: The denominator
 * Return: The result of the division
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: The numerator
 * @b: The denominator
 * Return: The remainder of the division
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
}
