#include<stdio.h>
int main(){
int array[4][2];
for (int i = 0; i <4; i++)
{
   printf("ENter the marks of roll %d :",i+1);
   scanf("%d",&array[i][1]);
}
printf("The Tabular form of roll number and marks od students is :-\n");
printf("Roll  Marks\n");
for (int i = 0; i <4; i++)
{
  printf("|%d|   |%d|",i+1,array[i][1]);
  printf("\n");
}
return 0;
}