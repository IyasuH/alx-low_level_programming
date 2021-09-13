#include "main.h"
0;136;0c#include <string.h>
#include <stdio.h>

/**
 *print_diagsums - functio
 *@a: pointer int
 *@size: int
 *
 *Return: null
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int add;
add = 0;
for(i = 0; i <= size; i++)
{
for(j = 0; j <= size; j++)
{
if(i == j)
add = add + a[i];
puts(add);
}
}
puts(',');
puts(' ');
puts(' ');
}
