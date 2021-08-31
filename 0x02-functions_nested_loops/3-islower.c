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
if(c>64&&c<91)
a = 0;
else
a = 1;
return (a);
}
