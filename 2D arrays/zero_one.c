// number of ones count karna hai ... in each row>>
#include<stdio.h>
int main()
{ 
int array[3][4]={1,0,1,1,0,0,0,1,1,1,0,0};
for (int i = 0; i < 3; i++)
    // sabhi rows me dekhna tha isliye pehla for loop ke bad ise rakha>>
{   int  one_count=0;
    for (int j = 0; j < 4; j++)
    {   
        if (array[i][j]==1)
        {
            one_count++;
        }      
    } 
    printf("No. of ones in row %d is %d \n",i+1,one_count);  
} 
return 0;
}