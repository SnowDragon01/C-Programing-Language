#include<stdio.h>
void univ_life(){
  printf("My university life is very good infact i am enjoying is so much...\n");//05
  return;
}
void intro_rohit(){
  printf("my self rohit kumar\n");//02
  printf("I live in UK\n");//03
  printf("I study in XYz university\n");//04
        
    return;
}
float area_rect(float a,float b){
    
   return a*b;//06
}

int main()
{
intro_rohit(); //01
univ_life();

printf("The area of the rectangle is %.3f",area_rect(5.0,1.3));
return 0;
}