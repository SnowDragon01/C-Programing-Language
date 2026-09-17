#include<stdio.h>
int main()
{
int array[8]={2,14,13,1,7,8,11,4};
// nesting :loop ke andar loop....
for (int i= 0; i <9; i++)
{ 
    for (int j =i+1; j <9; j++)
{
    if (array[i]+array[j]==15){

   printf("(%d,%d) ",array[i],array[j]);
}
}
}
return 0;
}