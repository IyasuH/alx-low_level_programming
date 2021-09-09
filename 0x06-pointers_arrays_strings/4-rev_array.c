#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - function to reverse integers
 * @a: int array
 * @n: int var
 *
 * Return:null
 */
void
reverse_array(int *a, int n)
{
int low;
int high;
for (low = 0, high = n - 1; low < high; low++, high--)
{
int temp = a[low];
a[low] = a[high];
a[high] = temp;
}
}
