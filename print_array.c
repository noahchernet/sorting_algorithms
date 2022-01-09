#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * swap_array - swap two elements of an array
 * @array: items of this array will be swapped
 * @i: item to be swapped with @j
 * @j: item to be swapped with @i
 *
 * Return: void
 */
void swap_array(int *array, size_t i, size_t j)
{
	int c = array[j];
	array[j] = array[i];
	array[i] = c;
}
