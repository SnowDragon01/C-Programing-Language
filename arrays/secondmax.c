#include<stdio.h>

int main()
{
    int max=0,secondmax=0;
int array[8]={512,445,97,123,334,511,42,33};
for (int i = 0; i <=7; i++)
{
   if (max<array[i])
   {
    max=array[i]; 
}
if (max!=array[i] && secondmax<array[i])
   { secondmax=array[i];
   }
}
printf("%d ",max);
printf("%d ",secondmax);
return 0;
}
