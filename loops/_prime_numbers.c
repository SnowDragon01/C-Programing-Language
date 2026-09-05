#include<stdio.h>
int main()
{
int number;
// a=1  agar hota h iska matlab for loop ka if statement true hai...
int a=0;
printf("Enter your number :");
scanf("%d",&number);
for (int i = 2; i <number; i++)
{
 if (number%i==0)
 {
  printf("Number is composite...");
  a=1;
  break;
 }
 if(a==0){
printf("Entered number is prime...");
break;
 }
}
if (number==1)
{
  printf("Entered number is neither prime nor composite...");
}
return 0;
}