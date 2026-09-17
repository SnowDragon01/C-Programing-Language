#include<stdio.h>
int main()
{
 int array[5][5];
 for (int i = 0; i < 5; i++)
 {
    for (int j = 0; j < 5; j++)
    {       // better...
       printf("array[%d][%d]=%d \n",i,j,10);
    // ordinary...
    // printf("%d ",10);
    }
printf("\n");
 }
return 0;
}