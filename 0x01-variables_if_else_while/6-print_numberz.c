#include<stdio.h>
/**
 *main - putchar only
 *Description: no pritnf
 *Return: null
 */
int main(void)
{
int ccc;
for (ccc = '0'; ccc <= '9'; ccc++)
{
putchar(ccc);
}
putchar('\n');
return (0);
}
