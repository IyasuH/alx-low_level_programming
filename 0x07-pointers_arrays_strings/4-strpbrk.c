#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strpbrk - function
 *@s: char 1
 *@accept: char 2
 *
 *Return: char
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
const char *a = accept;
while (*a != '\0')
if (*a++ == *s)
return ((char *)s);
++s;
}

return (0);
}
