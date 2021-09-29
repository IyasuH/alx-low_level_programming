#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - function
 *@array: int
 *@size: size_t
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
(*action)(array[i]);
}
