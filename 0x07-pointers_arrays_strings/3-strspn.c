#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strspn - function
 *@s:
 *@accept:
 *
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++) {
for (j = 0; accept[j]; j++) {
if (accept[j] == s[i])
break;
}
if (!accept[j])
break;
}
return (i);
}
