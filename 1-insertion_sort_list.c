#include "sort.h"

/**
 * node_swap - swaps two adjecent nodes
 * @left: the left node
 * @right: the right node
 */
void node_swap(listint_t *left, listint_t *right)
{
	left->next = right->next;
	right->prev = left->prev;

	left->prev = right;
	right->next = left;

	if (left->next)
		left->next->prev = left;

	if (right->prev)
		right->prev->next = right;
}
/**
 * insertion_sort_list - sorts doubly linked list
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *last = *list;
	listint_t *temp = NULL;


	while (current)
	{
		while (current && current->prev && current->n < (current->prev)->n)
		{
			temp = (current->prev)->prev;

			node_swap(current->prev, current);
			/* when swapping at the edge */
			if (!temp)
				*list = current;

			print_list(*list);
		}
		current = last;
		if (last)
			last = last->next;
	}
}
