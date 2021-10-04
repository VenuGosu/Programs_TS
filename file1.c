#include<stdio.h>
#include"header.h"
#include<unistd.h>

void file1()
{
  
  printf("In file1.c");
  printf("PID of file1.c is %d \n",getpid());
}
  
