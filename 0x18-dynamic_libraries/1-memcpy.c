#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memcpy - function
 *@dest: char 1 pointer
 *@src: char 2 pointers
 *@n: int
 *
 *Return: char data type
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;
while (n--)
*d++ = *s++;
return (dest);
}
