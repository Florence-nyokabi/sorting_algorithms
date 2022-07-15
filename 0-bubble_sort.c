#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array - array to be sorted
 * @size - size of array
 * Description - uses bubble sort algorithmn
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if(array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
