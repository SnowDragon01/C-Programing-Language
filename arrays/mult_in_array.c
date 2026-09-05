#include<stdio.h>
int main()
{ float product=1.0;
    //user se input liya ....
    float num[4];
    for (int i = 0; i < 4; i++)
    {
       printf("Enter your inputs in index %d\n",i);
       scanf("%f",&num[i]);
    }
    
// float num[]={2.0,4.5,3.2,9};    pehle se input v le sakte ho...
for (int i = 0; i < 4; i++)
{
    product=product*num[i];
}
 printf("The product of element in the array is %.2f\n",product);
return 0;
}