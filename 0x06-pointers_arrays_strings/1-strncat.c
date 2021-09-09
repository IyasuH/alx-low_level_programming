#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strncat - function
 *
 *@dest : char1
 *@src : char2
 *@n : int1
 *Return: char type
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int a = strlen(dest);
int b = strlen(src);
char c[a+(b - n - b)];
for(i = 0; i < n; i++)
c = strcat(dest, src[i]);
return (c);
}
