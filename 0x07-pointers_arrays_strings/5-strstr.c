#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strstr - function
 *@s: char 1
 *@find: char2
 *
 *Return: char type
 */
char *_strstr(char *s, char *find)
{
register char *a, *b;


b = find;
if (*b == 0)
return (s);
for ( ; *s != 0; s += 1)
{
if (*s != *b)
continue;
a = s;
while (1)
{
if (*b == 0)
return (s);
if (*a++ != *b++)
break;
}
b = find;
}
return (NULL);
}
