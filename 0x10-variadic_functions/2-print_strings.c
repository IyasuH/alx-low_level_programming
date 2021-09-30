#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - function
 *@separator: char
 *@n: int
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *v;
va_start(ap, n);
for (i = 0; i < n ; i++)
{
v = va_arg(ap, char*);
if (v != NULL)
printf("%s", v);
else
printf("nil");
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
