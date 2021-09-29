#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function
 *@array: int 0
 *@size : int 1
 *@cmp: functtion pointer
 *Return : int type
 */
int  int_index(int *array, int size, int (*cmp)(int))
{
int i;
for(i = 0; i < size; i++)
{
  if (cmp(array[i]))
return i;
}
return -1;
}
