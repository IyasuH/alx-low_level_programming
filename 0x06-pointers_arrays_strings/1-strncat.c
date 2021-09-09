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
char *c;
c = strncat(dest, src, n);
return (c);
}
