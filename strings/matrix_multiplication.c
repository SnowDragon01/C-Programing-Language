#include <stdio.h>
int main()
        // yha se rowws or columns ko manipulate karlo..
{   int m=3,n=2,q=4;
    int matrix1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int matrix2[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int result[3][4];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {    result[i][j]=0;
            // matrix multiplication ke liye jo row/column common hoti hai utna tak hi 'k' chalta hai..
            for (int k = 0; k < n; k++)
            {       // 'k' i,j pe depend nahi kar rha ye independently inc. karega from '0' ..
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}