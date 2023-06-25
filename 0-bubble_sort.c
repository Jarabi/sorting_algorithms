#include "sort.h"

/**
 * bubble_sort - Sorts array of integers in ascending order
 * using the bubble sort algorithm
 * @array: Array of integers to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t m, n;
	int temp, swap;

	if (array == NULL || size < 2)
		return;

	for (m = 0; m <= size - 2; m++)
	{
		swap = 0;
		for (n = 0; n < size - m - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				swap |= 1;
			}
			if (swap)
				print_array(array, size);
		}
	}
}
