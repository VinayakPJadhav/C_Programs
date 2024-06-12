#include<stdio.h>
int main ()
{
  int no =10;
  int x=0;

  x=--no;
  printf("increment by 1 is %d",x);

    x=no--;
  printf("increment by 1 is %d",x);

    return 0;
}