#include<stdio.h>
int main()
{
int array[5]={1,2,3,4,5};
for (int i = 0; i <5; i++)
{
  int a;
  a=array[4-i];
  printf("%d ",a);
}
return 0;
}