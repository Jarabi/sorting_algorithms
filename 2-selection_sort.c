#include "sort.h"

/**
 * selection_sort - Sort array of integers in ascending
 * order using Selection sort algorithm
 * @array: The integer array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t p, q, min;
	int swap;

	if (array && size > 1)
	{
		for (p = 0; p < size - 1; p += 1)
		{
			min = p;

			for (q = p + 1; q < size; q += 1)
			{
				/* Get the minimum element in each run */
				/* Switch < to > to sort descending */
				if (array[q] < array[min])
					min = q;
			}
			if (min !=  p)
			{
				/* Set min element to correct position */
				swap = array[min];
				array[min] = array[p];
				array[p] = swap;

				print_array(array, size);
			}
		}
	}
}
