#include "sort.h"

/**
 * selection_sort - sorts @array using the selection sort algorithm, printing
 * the array on each swap_array
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest_num;

	for (i = 0; i < size; i++)
	{
		smallest_num = i + 1;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest_num])
			{
				smallest_num = j;
			}
		}
		if (smallest_num < size && array[i] > array[smallest_num])
		{
			swap_array(array, i, smallest_num);
			print_array(array, size);
		}
	}
}
