#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function
 *@array: int 0
 *@size : int 1
 *@cmp: functtion pointer
 *Return: int type
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, r;
if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r)
break;
}
if (i < size)
return (i);
}
return (-1);
}
