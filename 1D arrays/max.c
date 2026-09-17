#include<stdio.h>
#include<limits.h>
int main()
{
int box[]={12,13,1,4,90,87};
//both can be used ...
// max ko minimmum value do ...
// int max =INT_MIN;
int max =box[0];
for (int i = 0; i <=5; i++)
{
   if (max<box[i])
   {
    max=box[i];
   }
}
printf("The max value in the array:%d\n",max);
return 0;
}