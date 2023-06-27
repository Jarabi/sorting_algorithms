#include "sort.h"
#include <stdio.h>

/**
 * is_sorted_array - Checks if array is sorted
 * @arr: Array to check
 * @size: Size of array
 *
 * Return: If sorted 1, else 0
 */
int is_sorted(int *arr, size_t size)
{
	size_t j;

	for (j = 0; j <= size - 2; j++)
	{
		printf("%d > %d?\n", arr[j], arr[j + 1]);

		if (arr[j] > arr[j + 1])
			return (0);
	}
	return (1);
}

/**
 * main - Test sort
 * Return: 0
 *
int main(void)
{
	int arr[] = {2, 4, 5, 7, 8, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Sorted? (1 - Yes, 0 - No): %d\n", is_sorted(arr, size));
	return (0);
}
*/
