#include "sort.h"
/**
 * quick_sort - fonction principale
 * @array: tableau à trier
 * @size: taille du tableau
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;
    quick_sort_recursive(array, 0, size - 1, size);
}
// 2. Fonction récursive
void quick_sort_recursive(int *array, int low, int high, size_t size)

// 3. Fonction de partition
int lomuto_partition(int *array, int low, int high, size_t size)