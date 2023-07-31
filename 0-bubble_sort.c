#include "sort.h"

/**
 * bubble_sort - Iterates threw an array and swaps values to sort list in
 * ascending order
 * @array: An array of integers
 * @size: size of array
 *
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i = 0;
	int flag = 1;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			/* if flag remains 0 after final iteration then we exit loop */
			if (array[i] > array[i + 1])
			{
				flag = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
