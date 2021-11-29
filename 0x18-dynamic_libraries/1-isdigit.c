#include "main.h"
#include <stdio.h>
/**
 *_isdigit - mfunc
 * @c: dgit or not
 *
 *Return: int
 */
int _isdigit(int c)
{
int a;
if (c < 58 && c > 47)
a = 1;
else
a = 0;
return (a);
}
