#include"main.h"
#include<stdio.h>
/**
 *main - fizzbuzz
 *
 *Return: int
 */
int main(void)
{
int i = 1;
 while(i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0)
printf("Fizz");
else
printf("%i", i);
if(i != 100)
putchar(' ');
i++;
}
printf("\n");
return (0);
}
