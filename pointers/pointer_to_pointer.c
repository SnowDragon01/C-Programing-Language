#include<stdio.h>
int main()
{
int a=15, b=20;
int* x=&a;
int** X=&x;
printf("Value of a:%d\n",a);
printf("Value of a:%d\n",*x);
printf("Value of a:%d",**X);
return 0;
}