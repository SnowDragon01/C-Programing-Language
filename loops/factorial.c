#include<stdio.h>
int main()
{ int n,product=1;
printf("Enter a number :");
scanf("%d",&n);
for (int i = 2; i <= n; i++)
{
    product=product*i;
}
printf("%d! is %d ",n,product);
return 0;
}