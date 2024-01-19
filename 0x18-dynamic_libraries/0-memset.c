#include "main.h"
/**
 * _memset - program fills a block of memory with a specific value
 * @s: Start address of memory
 * @b: the expected outcome
 * @n: number of bytes being changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
