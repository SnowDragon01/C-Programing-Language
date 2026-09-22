// user se input lekar nxn matrix ka transpose print karne ka code>>
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the order of the matrix :");
    scanf("%d", &n);
    int array[n][n];
    printf("Enter elements of the matrix :\n");
    // scanning ka loop>>
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
        printf("The transposed matrix is :\n");
        // printing ka loop>>
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}