#include "sort.h"

/**
 * insertion_sort_list - Trie une liste doublement chaînée d'entiers
 *                       en utilisant l'algorithme de tri par insertion
 * @list: Pointeur vers la tête de la liste doublement chaînée
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		prev = current->prev;

		while (prev != NULL && prev->n > temp->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;

			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;

			prev = temp->prev;
			print_list(*list);
		}

		current = current->next;
	}
}

