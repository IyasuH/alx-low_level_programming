#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strchr - function
 *@s: char 1
 *@c: char 2
 *
 *Return: char type
 */

char *_strchr(char *s, char c)
{
do {
if (*s == c)
return ((char *)s);
} while
(*s++);
return (0);
}
