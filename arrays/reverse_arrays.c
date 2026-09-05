#include<stdio.h>
int main()
{
int array[5];
for (int i = 0; i < 5; i++)
{ 
  printf("Enter your value at index %d\n",i);
  scanf("%d",&array[i]);
}
// reversed the loop...
for (int i = 5; i >=1; i--)
{
 printf("Your %d element is %d\n",i,array[i-1]);
}
return 0;
}