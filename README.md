# Algorithmes de tri – Holberton School

Implémentation en C de plusieurs algorithmes de tri, sur tableaux d'entiers et listes doublement chaînées, avec fonctions d'affichage pour le débogage.

## Fichiers principaux

- sort.h – définitions de types (listint_t) et prototypes des fonctions de tri et d'affichage.
- print_array.c – affiche le contenu d'un tableau d'entiers.
- print_list.c – affiche une liste doublement chaînée de listint_t.

## Algorithmes de tri

- 0-bubble_sort.c – implémente le tri à bulles sur un tableau d'entiers (bubble_sort).
- 1-insertion_sort_list.c – implémente le tri par insertion sur une liste doublement chaînée (insertion_sort_list).
- 2-selection_sort.c – implémente le tri par sélection sur un tableau d'entiers (selection_sort).
- 3-quick_sort.c – implémente le tri rapide (Quick sort) sur un tableau d'entiers (quick_sort, partition interne).

## Fichiers de test / démonstration

- 0-main.c – programme de test pour bubble_sort (utilise print_array).
- 1-main.c – programme de test pour insertion_sort_list (utilise print_list).
- 2-main.c – programme de test pour selection_sort.
- 3-main.c – programme de test pour quick_sort.

## Complexité (fichiers `*-O`)

Ces fichiers contiennent les réponses sur la complexité des algorithmes :

- 0-O – complexité du tri à bulles (meilleur / moyen / pire cas).
- 1-O – complexité du tri par insertion sur liste.
- 2-O – complexité du tri par sélection.
- 3-O – complexité du tri rapide.

## Dossiers

- insertion – fichiers supplémentaires liés au tri par insertion (sujets / corrections éventuelles).
- quick – fichiers supplémentaires liés au tri rapide.

## Compilation

Exemple (flags Holberton) :

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort
```

Inclure le header dans vos programmes :

```c
#include "sort.h"
```
