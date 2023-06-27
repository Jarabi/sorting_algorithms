#include "sort.h"

void recursive_qs(int array[], int low, int high, size_t size);
int partition(int array[], int low, int high, size_t size);
void swap_elements(int *yin, int *yan);

/**
 * quick_sort - Sort an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: Array of integers
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		recursive_qs(array, 0, size - 1, size);
}

/**
 * recursive_qs - Performs recursive call for quicksort
 * @array: Array of integers
 * @low: First index of array
 * @high: Last index of array
 * @size: Size of the array
 */
void recursive_qs(int array[], int low, int high, size_t size)
{
	int part_point;

	if (low < high)
	{
		part_point = partition(array, low, high, size);

		/* Recursive call for left of pivot */
		recursive_qs(array, low, part_point - 1, size);

		/* Recursive call for right of pivot */
		recursive_qs(array, part_point + 1, high, size);
	}
}

/**
 * partition - performs partitioning on an array using
 * lomuto partition scheme
 * @array: Array of integers
 * @low: Index to start iteration
 * @high: Index for the pivot value
 * @size: Size of the array
 *
 * Return: Partition point
 */
int partition(int array[], int low, int high, size_t size)
{
	int i, j, pivot;

	pivot = array[high];
	i = low - 1;

	/* Compare each element with pivot */
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_elements(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap_elements(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	/* Return partition point */
	return (i + 1);
}

/**
 * swap_elements - Function to swap array elements
 * @yin: First integer element
 * @yan: Second integer element
 */
void swap_elements(int *yin, int *yan)
{
	int swap;

	swap = *yin;
	*yin = *yan;
	*yan = swap;
}
