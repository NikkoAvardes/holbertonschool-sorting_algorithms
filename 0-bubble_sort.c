#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > i; j--)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
			print_array(array, size);
		}
	}
}
