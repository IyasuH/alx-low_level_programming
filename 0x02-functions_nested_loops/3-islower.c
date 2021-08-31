#include "main.h"
#include <stdio.h>
/**
 *_islower - checks on lowercase chars
 *@c: char to print 
 *
 *Return: int
 */
int _islower(int c)
{
int a;
if (c < 123 && c > 96)
a = 1;
else
a = 0;
return (a);
}
