#include "sort.h"

/**
 * selection_sort - sorts an algorithm in a linear fashion n^2 times
 * @array: An array of integers
 * @size: the size of the array
 *
 * Return: None
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i = 0, j;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
