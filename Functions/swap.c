#include<stdio.h>
int main()
{
    int a;
    
printf("Enter a :");
scanf("%d",&a);
int b;

printf("Enter b :");
scanf("%d",&b);
int temp;
temp=a;
a=b;// meaning changes it means b ki value a me dalo...
b=temp;
printf("The value of a :%d\n",a);
printf("The value of b :%d",b);

return 0;
}