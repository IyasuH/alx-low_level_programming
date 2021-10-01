#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function
 *@name: char
 *@f: void pointer function
 */
void print_name(char *name, void (*f)(char *))
{
if(f != NULL)
f(name);
}
