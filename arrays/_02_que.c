#include<stdio.h>
int main()
{
int arr[7]={2,3,4,5,6,7,10};
for (int i = 1; i <=5;i=i+2)
{
   printf("# The second multiple of odd array of index %d is %d\n",i,2*arr[i]);
}
for (int i = 0; i <=6; i=i+2)
{
   printf("# The increment by 10 in even elements of array of index %d is %d\n",i,10+arr[i]);
}

return 0;
}