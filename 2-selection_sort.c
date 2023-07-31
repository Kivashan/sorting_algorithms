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
	int index, temp;
	size_t i = 0, j;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
			if (array[index] > array[j])
				index = j;
		if (array[index] < array[i])
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
