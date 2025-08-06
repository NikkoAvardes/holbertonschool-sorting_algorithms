#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int tmp;

	if (!array || size < 2)
		return;
	for (gap = size / 2; gap > 0; gap /= 2)
	{
		for (i = gap; i < size; i += 1)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
