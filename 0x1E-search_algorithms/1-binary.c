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
	printf("Searching in args: ");
	for (x=0; x<size; x++)
		printf("%d, ", array[x]);
	printf("\n");
	return iterBinary(array, 0, size, value);
}

int iterBinary(int *array, int start_index, int end_index, int value){
	int x;
	printf("Searching in array: ");
	if (end_index >= start_index){
		int middle = start_index + (end_index - start_index)/2;
		if (array[middle] == value)
			return value;
		if (array[middle] > value)
		{
			for (x=start_index; x<=middle-2; x++)
				printf("%d, ", array[x]);
			printf("\n");
			return iterBinary(array, start_index, middle-1, value);
		}
		for (x=middle+1; x<=end_index-1; x++)
			printf("%d, ", array[x]);
		printf("\n");
		return iterBinary(array, middle+1, end_index, value);
	}
	return (-1);
}
