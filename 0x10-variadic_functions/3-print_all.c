#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - function
 *@format: const char
 *Return: null
 */
void print_all(const char * const format, ...)
{
  va_list ap;
  *char c;
  int i;
  *float f;
  char *s;
  va_start(ap, format);
  while(va_arg(ap, *char), va_arg(ap, int), va_arg(ap, *float), va_arg(ap, char*))
    {
      c = va_arg(ap, char);
      i = va_arg(ap, int);
      f = va_arg(ap, float);
      s = va_arg(ap, char*);
      
	printf("%c%d%f%s", c,i,f,s);
      printf(", ");
    }
  printf("\n");
}
