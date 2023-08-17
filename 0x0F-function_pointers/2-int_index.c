#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array of integers
 * @size: Number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: -1 if no element matches and size is <= 0
 * Otherwise - The index of the first element for
 * cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}

