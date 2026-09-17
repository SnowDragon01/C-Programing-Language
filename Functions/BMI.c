#include<stdio.h>
float measurement(float h,float w){
    float BMI=w/(h*h);
    return BMI;
}
int main()
{
   float weight,height;
printf("weight in kg:");
scanf("%f",&weight);

printf("height in meteres:");
scanf("%f",&height);
// call function... measurement(height,weight)
 
printf("Your body mass index :%f",measurement(height,weight));
return 0;
}