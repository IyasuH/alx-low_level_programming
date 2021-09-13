#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_memset - function
 *@s: char pointer
 *@b: char var
 *@n: unsigned int
 *
 *Return: char data type
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
char *memory = s;
unsigned  char value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
