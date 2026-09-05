#include<stdio.h>
int main()
{
char input[6];
for (int i = 0; i < 6; i++)
{
  printf("Enter your character of index '%d': ",i );
  scanf(" %c", &input[i]);
}
for (int i = 1; i <=6; i++){

   printf("your %dth element is %c\n",i,input[i-1]);
}

return 0;
}


















