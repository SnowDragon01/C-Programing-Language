#include<stdio.h>
int main()
{
int array[]={79,45,23,28,32,90,9,11,73,54};
for (int i = 0; i <=9; i++)
{
   if (array[i]>10)
   {
    printf("%d ",array[i]);
   }
}

return 0;
}