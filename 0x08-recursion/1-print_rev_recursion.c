#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_print_rev_recursion - function
 *
 *@s: char 1
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
