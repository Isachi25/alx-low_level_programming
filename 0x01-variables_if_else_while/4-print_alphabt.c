#include <stdio.h>
/**
 * main - prints all aphabets in lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')

				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
