#include <stdio.h>
int main()
{
    int array[3][3] = {{4, 6, 7}, {9, 0, 1}, {3, 4, 5}};
   
    for (int i = 0; i <= 2; i++)
    {
        for (int k = 0; k <= 2; k++)
        {
            printf("|%d|", array[i][k]);
        }
        printf("\n");
    }
    return 0;
}