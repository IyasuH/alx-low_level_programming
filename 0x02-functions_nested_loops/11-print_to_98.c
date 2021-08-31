#include "main.h"
#include<stdio.h>
/**
 *print_to_98
 *@n - int
 *
 *Return: iny
 */
void print_to_98(int n)
{
int a;
if (n > 98)
{
for(a = n; a >= 98; a--)
_putchar(a);
}
else
{
for(a = n; a <= 98; a++)
_putchar(a);
}
}
