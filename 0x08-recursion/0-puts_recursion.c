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
if (*s == '\0')
return;
else{
_putchar(*s);
_puts_recursion(s + 1);
}
_putchar('\n');
}
 
