#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strstr: function
 *@haystack: char 1
 *@needle: char2
 *
 *Retunr: char type
 */
char *_strstr(char *haystack, char *needle)
{
const char *p = haystack;
const size_t len = strlen (needle);
for (; (p = strchr (p, *needle)) != 0; p++)
{
if (strncmp (p, needle, len) == 0)
return (char *)p;
}
return (0);
}
