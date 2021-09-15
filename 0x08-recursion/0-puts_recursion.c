#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_puts_recursion - function
 *
 *@s: char 1
 */
void _puts_recursion(char *s)
{
int i;
char *c = s;
for (i = 0; i < 19; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
