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
int b;
if (n > 98)
{
for (a = n; a >= 98; a--)
b = a + '0';
_putchar(b);
_putchar(' ');
_putchar('\n');
}
else
{
for (a = n; a <= 98; a++)
b = a + '0';
_putchar(b);
_putchar(' ');
_putchar('\n');
}
}
