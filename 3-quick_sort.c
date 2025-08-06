#include "sort.h"

/**
 * lomuto_partition - Partitionne un tableau en utilisant le schéma Lomuto
 * @array: Le tableau à partitionner
 * @low: Index de début de la partition
 * @high: Index de fin de la partition
 * @size: Taille du tableau
 *
 * Return: Index du pivot après partition
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		array[i + 1] = temp;
		array[i + 1] = array[high];
		temp = array[high];
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_recursive - Fonction récursive pour Quick Sort
 * @array: Le tableau à trier
 * @low: Index de début
 * @high: Index de fin
 * @size: Taille du tableau
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Trie un tableau d'entiers en utilisant Quick Sort
 * @array: Le tableau à trier
 * @size: Taille du tableau
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

