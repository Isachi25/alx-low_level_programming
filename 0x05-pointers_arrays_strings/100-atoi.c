#include "main.h"
/**
 * _atoi - A function that converts a string to an integer.
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1

    while (*s == ' ')
        s++;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
 
        if (result > (INT_MAX - (*s - '0')) / 10) {

            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

int main() {
    char str1[] = "42";
    char str2[] = "    -123";
    char str3[] = "hello123";
    char str4[] = "  -2147483647";
    char str5[] = "2147483648";

    printf("%d\n", _atoi(str1)); // Output: 42
    printf("%d\n", _atoi(str2)); // Output: -123
    printf("%d\n", _atoi(str3)); // Output: 0 (No numbers in the string)
    printf("%d\n", _atoi(str4)); // Output: -2147483647
    printf("%d\n", _atoi(str5)); // Output: 2147483647 (Overflow, INT_MAX)

    return 0;
}

