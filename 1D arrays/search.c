#include<stdio.h>
int main()
{ int x=0;
    int number;
    printf("Enter your number:");
    scanf("%d",&number);
int array[9]={1,2,4,5,6,8,9,11,13};
for (int i = 0; i <9; i++)
{ 
    if (number==array[i])
{   
  x=1;
}
} 
if(x==0){
    printf("Your number is not present 😭");
}
 if (x==1)
 {
     printf("Your number is present 🤩");
 }
return 0;
}