#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argv: pointer to the array of strings
 * @argc: counts the number of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
