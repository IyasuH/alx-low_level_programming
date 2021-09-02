#include"main.h"
/**
 *print_triangle - print triangle
 *@size: size of trianglr
 *
 *Return: null
 */
void print_triangle(int size)
{
int n;
int m;
if (size > 0)
{
for (n = 1; n <= size; ++n)
{
for (m = n; m < size; ++m)
_putchar(' ');
for(m=1; m <= n; ++m)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
