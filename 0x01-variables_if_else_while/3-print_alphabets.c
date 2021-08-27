#include<stdio.h>
/**
 *main - print
 *Description: LONG
 *Return: return 0
 */
int main(void){
char ch1;
char ch2;
for(ch1 = 'a', ch2 = 'A'; ch1 <= 'z', ch2 <= 'Z' ; ch1++, ch2++){
putchar(ch1);
putchar(ch2);
}
return (0);
}
