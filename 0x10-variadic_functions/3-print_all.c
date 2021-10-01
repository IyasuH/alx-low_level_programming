#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 *print_all - function
 *@format: const char
 *Return: null
 */
void print_all(const char * const format, ...)
{
  va_list ap;
  va_start(ap, format);
  while(*format != '\0')
    {
      if (*format == 'd') {
            int i = va_arg(ap, int);
            printf("%d", i);
	    if (va_arg(ap, int) < 0)
	      break;
        } else if (*format == 'c') {
            int c = va_arg(ap, int);
            printf("%c", c);
	    if (va_arg(ap, int) < 0)
	      break;
        } else if (*format == 'f') {
            double d = va_arg(ap, double);
            printf("%f", d);
	    if (va_arg(ap, double) < 0)
	      break;
      }else if (*format == 's')
	{
	  char *s = va_arg(ap, char*);
	  printf("%s", s);
	  if (strlen(va_arg(ap, char*)) == 0)
	    break;
	}
      printf(", ");
    }
  va_end(ap);
  printf("\n");
}
