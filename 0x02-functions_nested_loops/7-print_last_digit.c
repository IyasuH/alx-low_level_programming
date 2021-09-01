
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
a = ((n*-1) % 10);
_putchar(a);
return (a);
}
