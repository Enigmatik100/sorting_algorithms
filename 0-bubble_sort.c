#include "sort.h"
/**
 * swap - function to swap two integers
 * @a: pointer on integer
 * @b: pointer on integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using the Bubble sort algorithm
 * @array: pointer on array of integer
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
