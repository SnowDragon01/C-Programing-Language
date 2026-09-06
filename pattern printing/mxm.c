#include<stdio.h>
int main()
{ int a;
printf("Enter a for axa:");
scanf("%d",&a);
for (int i = 1; i<=a; i++)
{
  printf("* ");
  for (int i = 1; i <=a; i++)
  {
    printf("\n");
  }
  
}

return 0;
}