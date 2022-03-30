#include "search_algos.h"

/**
 * binary_search - searches fo r a value in an array of
 * integers using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (x = 0; x < size - 1; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[size - 1]);
	return (iterBinary(array, 0, size - 1, value));
}

/**
 * iterBinary - iterating untill start_index equals
 * end_index where the array is done
 * @array: Array to be iterated
 * @start_index: is the lowest value
 * @end_index: is the highest value
 * @value: the value to be searched
 * Return: the index where value is located
 */
int iterBinary(int *array, int start_index, int end_index, int value)
{
	int mid;
	int x;

	while (start_index <= end_index)
	{
		mid = start_index + (end_index - start_index) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		if (value > array[mid])
		{
			start_index = mid + 1;
			if (start_index <= end_index){
			printf("Searching in array: ");
			for (x = start_index; x < end_index; x++)
				printf("%d, ", array[x]);
			printf("%d\n", array[end_index]);
			}
		}
		else
		{
			end_index = mid - 1;
			printf("Searching in array: ");
			for (x = start_index; x < end_index; x++)
				printf("%d, ", array[x]);
			printf("%d\n", array[end_index]);
		}
	}
	return (-1);
}
