#include<stdio.h>
void swap(int* a, int* b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  return;
}
int main()
{
int a=5,b=9;
printf("The value of a : %d\n",a);
printf("The value of b : %d\n",b);
  swap(&a,&b);
printf("The new value of a :%d\n",a);
printf("The new value of b :%d\n",b);

return 0;
}













