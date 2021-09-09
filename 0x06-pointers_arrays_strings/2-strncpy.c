#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - function
 *@dest : char 1
 *@src : char 2
 *@n : int
 *
 *Return: char data type
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
