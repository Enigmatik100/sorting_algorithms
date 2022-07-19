#include "sort.h"
/**
 * insertion_sort_list - function that sort a doubly
 * linked list of integers in ascending order using
 * the insertion sort algorithm
 * @list: pointer on the header of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		while (current->prev && current->n < current->prev->n)
		{
			tmp = current;
			if (current->next)
				current->next->prev = tmp->prev;

			current->prev->next = tmp->next;
			current = current->next;
			tmp->prev = current->prev;
			tmp->next = current;

			if (current->prev)
				current->prev->next = tmp;
			current->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;

			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
