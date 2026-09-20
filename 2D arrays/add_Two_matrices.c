#include<stdio.h>
int main()
{   //array ko change kar sakte ho..
    //input from user bhi kar sakte ho..
int array1[2][2]={1,2,3,4};
int array2[2][2]={5,6,7,8};
 int result[2][2];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {  //array1 or array2 ke element ke array ke sum ko teesre 2x2 array me dal diya ..
         result[i][j]=array1[i][j]+array2[i][j];
        printf("|%d|",result[i][j]);
   }
   printf("\n");
}
return 0;
}