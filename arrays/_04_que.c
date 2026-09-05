#include<stdio.h>
int main()
{  int sum1=0,sum2=0;
int array[8]={123,-90,78,45,-32,1,55,-12};
for (int i = 0; i <=6;i=i+2)
{
   sum1=sum1+array[i];
}

for (int i = 1; i <=7; i=i+2)
{
    sum2=sum2+array[i];
    
}
 printf("%d\n",sum1);
 printf("%d\n",sum2);
 printf("\nThe required output is %d\n",sum1-sum2);
return 0;
}