#include<stdio.h>
#include "3-calc.h"
/**
 *get_op_func - function
 *@s - function pointer
 *Return: int type
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
 while(i < sizeof(ops))
   {
     i++;
     if(ops[0][0] == "+" || ops[1][0] == "-" || ops[2][0] == "*"  || ops[3][0] == "/" || ops[4][0] == "%")
       return (ops[i][1]);
     return NULL;
   }
}
