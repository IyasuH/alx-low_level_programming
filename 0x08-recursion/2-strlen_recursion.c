#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strlen_recursion - function
 *
 *@s: char 1
 *Return: int type
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
