
#include "main.h"
/**
 *print_last_digit - print
 *@n: int
 *
 *Return: int
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
a = ((n*-1) % 10);
else
a = (n % 10);
_putchar(a);
return (a);
}
