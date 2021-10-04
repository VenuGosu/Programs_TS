#include<stdio.h>
#include"header.h"
   
extern int var;
void file2(int a,int b)
{
   int c;
   c=a+b;
   
  printf("In file2.c ------%d\n"var);
  printf("In file2.c \n");
  printf("addition completed %d \n",c);
}
