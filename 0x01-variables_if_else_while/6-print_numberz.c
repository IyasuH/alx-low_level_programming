#include<stdio.h>
/**
 *main - putchar only
 *Description: no pritnf
 *Return: null
 */
int main(void)
{
int ch;
for(ch=0; ch <= 9; ch++){
putchar(ch);
}
putchar('\n');
return (0);
}
