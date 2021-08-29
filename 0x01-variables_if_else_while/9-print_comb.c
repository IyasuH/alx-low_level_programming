#include<stdio.h>
/**
 *main - loop , if
 *Description: trying to print 0, 1, 2, ...
 *Return: void
 */
int main(void)
{
int num;
for (num = '1'; num <= '9'; num++)
{
putchar(num);
if (num <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
