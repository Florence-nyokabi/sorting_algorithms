#include "sort.h"

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heap_sort(int *array, size_t size);

/**
 * swap - swaps two integers in an array
 * @a - first integer to swap
 * @b - second integer to swap
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heapify - turns binary tree into complete binary heap
 * @arr - array
 * @n - size of heap 
 * @i - node which is index in arr[]
 */
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;
	if (right < n && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

/**
 * heap_sort - Sort an array of integers in ascending
 * 		order using heap algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;
	for (i = (size / 2) - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (i = size - 1; i > 0; i--)
	{
		swap(&arr[0], &arr[i]);
		print_array(array, size);
		heapify(arr, i, 0);
	}
}
