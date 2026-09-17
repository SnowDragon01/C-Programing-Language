#include<stdio.h>
int main()
{
int array[7]={1,2,3,4,5,6,7};
int temp;
for (int i = 0 ,j=6;i<j; i++,j--)
{
  temp=array[i];
  array[i]=array[j];
  array[j]=temp;
}
for (int i = 0; i <=6; i++)
{
    printf("%d ",array[i]);
}
return 0;
}