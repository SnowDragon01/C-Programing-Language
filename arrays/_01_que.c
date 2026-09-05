#include<stdio.h>
int main()
{
int marks[10];
for (int i = 0; i <=9; i++)
{
   printf("Enter the marks of the student of roll no %d\n",i);
   scanf("%d",&marks[i]);
} 
for (int i = 0; i <=9; i++)
{
   if (marks[i]<=35)
   {
    printf("The roll number of students whose marks less than equals to 35 is %d\n",i);
   }
   
}
return 0;
}