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
char c, sc;
size_t len;
c = *find++;
sc = *s++;
if (c != 0)
{
len = strlen(find);
do {
do {
if (sc == 0)
return (NULL);
} while (sc != c);
} while (strncmp(s, find, len) != 0);
s--;
}
return ((char *)s);
}
