// user se matrix input leni hai or uska transpose print karna hai>>
// we will take a 3x3 matrix here>.
#include <stdio.h>
int main()
{
    // int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int array[4][2] = {1, 2, 3, 4, 5, 6, 7, 8}; // input>>
    // OUTPUT>>
    // 1 3 5 7
    // 2 4 6 8
    int temp;
    printf("The transposed matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
