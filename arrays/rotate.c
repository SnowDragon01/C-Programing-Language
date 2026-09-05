#include<stdio.h>
void rotate_box2(int array[],int si,int ei){
  for (int i = si,j=ei; i <=j; i++,j--)
  {
    int temp;
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
  
  }
  return;
}
void rotate_box1(int array[],int si,int ei){
  for (int i = si,j=ei; i <=j; i++,j--)
  {
    int temp;
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
  }
  return;
}
void rotate(int array[]){
  for (int i = 0,j=8; i <=j; i++,j--)
  { int temp;
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
  
  }
  return;
}
int main()
{
int array[9]={1,2,3,4,5,6,7,8,9};
rotate(array);
//   for (int i = 0; i <9; i++)
//   {
// printf("%d ",array[i]);
//   }
  rotate_box1(array,0,3);
  // for (int i = 0; i <9; i++)
  // {
  //   printf("%d ",array[i]);
  // }
  rotate_box2(array,4,8);
 for (int i = 0; i <9; i++)
 {
  printf("%d ",array[i]);
 }
 
return 0;
}