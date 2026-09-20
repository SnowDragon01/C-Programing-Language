#include<stdio.h>
int main()
{
int n ;
printf("ENter a number :");
scanf("%d",&n);
for ( int i = 1; i <= n; i++)
{   int a=65;
    for (int j = 1; j <= i; j++)
    {
     if (i%2==0)
     {
        printf("%d ",j);
     }
     else if (i%2!=0)
     {  a=64+j;
        printf("%c ",a);
     }   
    }
    printf("\n");
}
return 0;
}