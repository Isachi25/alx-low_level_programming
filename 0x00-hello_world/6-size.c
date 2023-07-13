#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(S)\n", sizeof(a));
printf("Size of an int: %lu byte(S)\n", sizeof(b));
printf("Size of a long int: %lu byte(S)\n", sizeo(c));
printf("Size of a long long int: %lu byte(S)\n", sizeof(d));
printf("Size of a float: %lu byte(S)\n", sizeof(f));
return (0);
}
