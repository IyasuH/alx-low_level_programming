#include "main.h"
/**
 *_isalpha - check alpha
 * @c: char
 *
 *Return: int
 */
int _isalpha(int c)
{
int a;
if ((c < 123 && c > 96) || (c < 91 && c > 64))
a = 1;
else
a = 0;
return (a);
}
