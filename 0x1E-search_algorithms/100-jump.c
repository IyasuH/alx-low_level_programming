#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in sorted array of integers
 * @array: pointer to first element of sorted Array
 * @size: number of elements in array
 * @value: Is the value to search for
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t x;
	int arr2[10];
	size_t n;
	size_t max, min;

	if (value == array[size - 1])
	{
		printf("Value checked array[%ld] = [%d]\n", size - 1, array[size - 1]);
		return (size - 1);
	}
	for (x = 0; x < size; x = x + jump)
	{
		if (value > array[x])
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else if (value <= array[x])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", x - jump, x);
			if (value == array[size - 1])
			{
				printf("Value checked array[%ld] = [%d]\n", size - 1, array[size - 1]);
				return (size - 1);
			}
			for (n = x - jump; n <= x; n++)
			{
				arr2[n] = array[n];
			}
			min = x - jump;
			max = x;
			return (linear_search_me(arr2, max, min, value));
		}
	}
	return (-1);
}
/**
 * linear_search_me - linera search
 * @array: array to be searched
 * @max: maximum value to be evaluated
 * @min: minimum alue to be evaluated
 * @value: value to be serached
 * Return: index of the value get
 */

int linear_search_me(int *array, size_t max, size_t min, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = min; i <= max; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
