#include<stdio.h>
int main()
{
int array[6]={1,2,3,45,7,6};
printf("The memory location of 1st element is  %p\n",&array[0]);
printf("The memory location of 2nd element is  %p\n",&array[1]);
printf("The memory location of 3rd element is  %p\n",&array[2]);
printf("The memory location of 4th element is  %p\n",&array[3]);
return 0;
}