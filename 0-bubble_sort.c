#include "sort.h"

/**
 * bubble_sort - sorts @array using the bubble sort algorithm, printing the
 * array on each swap_array
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				swap_array(array, i, j);
				print_array(array, size);
			}
		}
	}
}
