#include<stdio.h>
int sum (int x,int y){
        return x+y;
}
int main()
{
int a =21,b=43;
sum(a,b);
printf("The value of sum a+b is %d",sum(a,b));
return 0;
}