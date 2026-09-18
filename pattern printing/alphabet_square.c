#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
for (int i = 0; i < n; i++)
{       // yad rakhna A-->Z tak ASCII number is 65 to 90..
   for (int j = 65; j < 65+n; j++)
   {
    printf("%c ",j);
   }
   printf("\n");
}
return 0;
}