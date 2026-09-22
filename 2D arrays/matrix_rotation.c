#include <stdio.h>
int main()
{   
    printf("Enter 3x3 matrix :\n");
    
    int array[3][3];
    printf("Enter elements of the matrix :\n");
    // scanning ka loop>>
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
        printf("The 90 degree rotated matrix is :\n");
    // int array[3][3]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                printf("%d ", array[2-j][0]);
            }
            else if (i == 1)
            {
                printf("%d ", array[2-j][1]);
            }
            else if (i == 2)
            {
                printf("%d ", array[2-j][2]);
            }
        }
        printf("\n");
    }
    return 0;
}