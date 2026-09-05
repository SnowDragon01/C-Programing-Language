#include<stdio.h>
void reverse(int array[], int si,int ei){
    int temp,i,j;
    // i,j ko badal ke koi particular part of array ko reverse kiya ja sakt ahai
    for ( i = si,j=ei;i<=j; i++,j--)
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    return ;
}
int main()
{ 
    // array ki size and elements badli ja sakti hai
int array[7]={99,98,97,96,95,94,93};

reverse(array,1,4);
for (int i = 0; i<=6; i++)
{ 
  printf("%d ",array[i]);
}
return 0;
}


















