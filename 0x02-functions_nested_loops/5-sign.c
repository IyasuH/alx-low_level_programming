#include "main.h"
/**
 *print_sign - sign
 * @n: int
 *
 *Return: 1 +ve, 0, -ve
 */
int print_sign(int n)
{
int a;
if (n > 0)
{
a = 1;
_putchar('+');
}
if (n < 0)
{
a = -1;
_putchar('-');
}
else
{
a = 0;
_putchar('0');
}
return (a);
}
