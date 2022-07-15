#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts array of ints in ascending order using bubble sort
 * @array: Array to sort
 * @size: Size of array
 */
int swapped = 0;
void swap(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
	swapped++;
}
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL)
		return;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array+j, array+j+1);
			}
		}
		if (swapped == 0)
			return 1;
	}
	return 0;
}
