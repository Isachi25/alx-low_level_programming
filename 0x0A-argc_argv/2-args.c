#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts the number of arguments passed.
 * @argv: pointer to the string of arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
