// maxmimum sum of all the elements kis row me hai usko print karna hai >>
#include<stdio.h>
int main()
{
int array[3][3] = {3, 7, 9, 5, 0, 1, 99, 34, 22};
int sum=0;
for (int i = 0; i < 3; i++)
{
  sum=sum+array[0][i];
} printf("row1sum=%d \n",sum);
 sum=0;
for (int i = 0; i < 3; i++)
{
  sum=sum+array[1][i];
} printf("row2sum=%d \n",sum);
sum=0;
for (int i = 0; i < 3; i++)
{
  sum=sum+array[2][i];
} printf("row3sum=%d ",sum);
return 0;
}




